#ifndef QUIC_CLIENT_H
#define QUIC_CLIENT_H
#include "../MsQuic/Linux_x64/include/msquic.h"
#include "../proto/build/user.pb.h"
#include "../proto/build/wrapper.pb.h"
#include <absl/strings/cord.h>
#include <condition_variable>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <mutex>
#include <shared_mutex>
#include <sys/stat.h>
#include "../proto/build/auth.pb.h"
#include "clientListenerModule/ClientListener.h"
#include "../error-manager/ErrorManager.h"
#include "../NetBird/VpnManager.h"
#include "../Helpers/PeerHandler/PeerHandler.h"
#include "../tokio-cpp/ThreadPool.h"
#include "clientPeerHandler/ClientPeerHandler.h"

class QuicClient : protected ClientPeerHandler {
  public:
    void Connect();

    void Disconnect();

    HQUIC getConnection();

    QuicClient& getRef();

    Lxcode SignUp(const Auth &);
    Lxcode SignIn(const Auth &);

    void send(const absl::Cord &);
    void send(const Wrapper &);

    void openPeer(const char* PeerIp, uint16_t UdpPort);
    void sendToPeer();
    void closePeer();

    QuicClient(const char *Host, const uint16_t UdpPort, const size_t ThreadNumber, const char* Alpn, const char *cert,
               const char *key = nullptr);

    ~QuicClient();

  private:

    using ClientPeerHandler::HandlePeer;
    using ClientPeerHandler::onPeerShutdown;

    const QUIC_API_TABLE *MsQuic = nullptr;
    static bool disconnected;
    HQUIC TunnelStream;

    ClientListener *cListener = nullptr;

    bool openTunnel();

    bool AuthRequest(const Wrapper &);

    void ClientLoadConfiguration(const char *cert, const char *key);

    _IRQL_requires_max_(PASSIVE_LEVEL)
        _Function_class_(QUIC_CONNECTION_CALLBACK) QUIC_STATUS QUIC_API
        ClientConnectionCallback(_In_ HQUIC Connection, _In_opt_ void *Context,
                                 _Inout_ QUIC_CONNECTION_EVENT *Event);

    static QUIC_STATUS QUIC_API StaticClientConnectionCallback(
        _In_ HQUIC Connection, _In_opt_ void *Context,
        _Inout_ QUIC_CONNECTION_EVENT *Event);

    _IRQL_requires_max_(DISPATCH_LEVEL)
        _Function_class_(QUIC_STREAM_CALLBACK) QUIC_STATUS QUIC_API
        ClientStreamCallback(_In_ HQUIC Stream, _In_opt_ void *Context,
                             _Inout_ QUIC_STREAM_EVENT *Event);

    static QUIC_STATUS QUIC_API
    StaticClientStreamCallback(_In_ HQUIC Stream, _In_opt_ void *Context,
                               _Inout_ QUIC_STREAM_EVENT *Event);

    QUIC_CREDENTIAL_CONFIG CredConfig;
    uint16_t UdpPort;
    HQUIC Connection = nullptr;
    HQUIC Listener = nullptr;
    HQUIC Registration = nullptr;
    HQUIC Configuration = nullptr;
    uint8_t *ResumptionTicket = nullptr;
    uint16_t ResumptionTicketLength;
    QUIC_STATUS Status;
    const char *Host;
    const QUIC_REGISTRATION_CONFIG RegConfig = {
        "Client", QUIC_EXECUTION_PROFILE_TYPE_REAL_TIME};
    const QUIC_BUFFER Alpn;

    uint32_t DecodeHexBuffer(_In_z_ const char *HexBuffer,
                             _In_ uint32_t OutBufferLen,
                             _Out_writes_to_(OutBufferLen, return)
                                 uint8_t *OutBuffer);

    uint8_t DecodeHexChar(_In_ char c);
};

#endif
