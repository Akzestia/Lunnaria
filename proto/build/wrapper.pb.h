// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wrapper.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_wrapper_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_wrapper_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "user.pb.h"
#include "test.pb.h"
#include "message.pb.h"
#include "auth.pb.h"
#include "report.pb.h"
#include "invite_link.pb.h"
#include "server.pb.h"
#include "vpn_graph.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_wrapper_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_wrapper_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_wrapper_2eproto;
class Wrapper;
struct WrapperDefaultTypeInternal;
extern WrapperDefaultTypeInternal _Wrapper_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Wrapper final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Wrapper) */ {
 public:
  inline Wrapper() : Wrapper(nullptr) {}
  ~Wrapper() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Wrapper(::google::protobuf::internal::ConstantInitialized);

  inline Wrapper(const Wrapper& from)
      : Wrapper(nullptr, from) {}
  Wrapper(Wrapper&& from) noexcept
    : Wrapper() {
    *this = ::std::move(from);
  }

  inline Wrapper& operator=(const Wrapper& from) {
    CopyFrom(from);
    return *this;
  }
  inline Wrapper& operator=(Wrapper&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Wrapper& default_instance() {
    return *internal_default_instance();
  }
  enum PayloadCase {
    kUser = 1,
    kPerson = 2,
    kMessage = 3,
    kAuth = 4,
    kReport = 5,
    kSerevr = 6,
    kInviteLink = 7,
    kVpnGraph = 8,
    PAYLOAD_NOT_SET = 0,
  };

  static inline const Wrapper* internal_default_instance() {
    return reinterpret_cast<const Wrapper*>(
               &_Wrapper_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Wrapper& a, Wrapper& b) {
    a.Swap(&b);
  }
  inline void Swap(Wrapper* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Wrapper* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Wrapper* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Wrapper>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Wrapper& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Wrapper& from) {
    Wrapper::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Wrapper* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Wrapper";
  }
  protected:
  explicit Wrapper(::google::protobuf::Arena* arena);
  Wrapper(::google::protobuf::Arena* arena, const Wrapper& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRouteFieldNumber = 9,
    kUserFieldNumber = 1,
    kPersonFieldNumber = 2,
    kMessageFieldNumber = 3,
    kAuthFieldNumber = 4,
    kReportFieldNumber = 5,
    kSerevrFieldNumber = 6,
    kInviteLinkFieldNumber = 7,
    kVpnGraphFieldNumber = 8,
  };
  // uint32 route = 9;
  void clear_route() ;
  ::uint32_t route() const;
  void set_route(::uint32_t value);

  private:
  ::uint32_t _internal_route() const;
  void _internal_set_route(::uint32_t value);

  public:
  // .User user = 1;
  bool has_user() const;
  private:
  bool _internal_has_user() const;

  public:
  void clear_user() ;
  const ::User& user() const;
  PROTOBUF_NODISCARD ::User* release_user();
  ::User* mutable_user();
  void set_allocated_user(::User* value);
  void unsafe_arena_set_allocated_user(::User* value);
  ::User* unsafe_arena_release_user();

  private:
  const ::User& _internal_user() const;
  ::User* _internal_mutable_user();

  public:
  // .Person person = 2;
  bool has_person() const;
  private:
  bool _internal_has_person() const;

  public:
  void clear_person() ;
  const ::Person& person() const;
  PROTOBUF_NODISCARD ::Person* release_person();
  ::Person* mutable_person();
  void set_allocated_person(::Person* value);
  void unsafe_arena_set_allocated_person(::Person* value);
  ::Person* unsafe_arena_release_person();

  private:
  const ::Person& _internal_person() const;
  ::Person* _internal_mutable_person();

  public:
  // .Message message = 3;
  bool has_message() const;
  private:
  bool _internal_has_message() const;

  public:
  void clear_message() ;
  const ::Message& message() const;
  PROTOBUF_NODISCARD ::Message* release_message();
  ::Message* mutable_message();
  void set_allocated_message(::Message* value);
  void unsafe_arena_set_allocated_message(::Message* value);
  ::Message* unsafe_arena_release_message();

  private:
  const ::Message& _internal_message() const;
  ::Message* _internal_mutable_message();

  public:
  // .Auth auth = 4;
  bool has_auth() const;
  private:
  bool _internal_has_auth() const;

  public:
  void clear_auth() ;
  const ::Auth& auth() const;
  PROTOBUF_NODISCARD ::Auth* release_auth();
  ::Auth* mutable_auth();
  void set_allocated_auth(::Auth* value);
  void unsafe_arena_set_allocated_auth(::Auth* value);
  ::Auth* unsafe_arena_release_auth();

  private:
  const ::Auth& _internal_auth() const;
  ::Auth* _internal_mutable_auth();

  public:
  // .Report report = 5;
  bool has_report() const;
  private:
  bool _internal_has_report() const;

  public:
  void clear_report() ;
  const ::Report& report() const;
  PROTOBUF_NODISCARD ::Report* release_report();
  ::Report* mutable_report();
  void set_allocated_report(::Report* value);
  void unsafe_arena_set_allocated_report(::Report* value);
  ::Report* unsafe_arena_release_report();

  private:
  const ::Report& _internal_report() const;
  ::Report* _internal_mutable_report();

  public:
  // .Server serevr = 6;
  bool has_serevr() const;
  private:
  bool _internal_has_serevr() const;

  public:
  void clear_serevr() ;
  const ::Server& serevr() const;
  PROTOBUF_NODISCARD ::Server* release_serevr();
  ::Server* mutable_serevr();
  void set_allocated_serevr(::Server* value);
  void unsafe_arena_set_allocated_serevr(::Server* value);
  ::Server* unsafe_arena_release_serevr();

  private:
  const ::Server& _internal_serevr() const;
  ::Server* _internal_mutable_serevr();

  public:
  // .Invite_link invite_link = 7;
  bool has_invite_link() const;
  private:
  bool _internal_has_invite_link() const;

  public:
  void clear_invite_link() ;
  const ::Invite_link& invite_link() const;
  PROTOBUF_NODISCARD ::Invite_link* release_invite_link();
  ::Invite_link* mutable_invite_link();
  void set_allocated_invite_link(::Invite_link* value);
  void unsafe_arena_set_allocated_invite_link(::Invite_link* value);
  ::Invite_link* unsafe_arena_release_invite_link();

  private:
  const ::Invite_link& _internal_invite_link() const;
  ::Invite_link* _internal_mutable_invite_link();

  public:
  // .Vpn_graph vpn_graph = 8;
  bool has_vpn_graph() const;
  private:
  bool _internal_has_vpn_graph() const;

  public:
  void clear_vpn_graph() ;
  const ::Vpn_graph& vpn_graph() const;
  PROTOBUF_NODISCARD ::Vpn_graph* release_vpn_graph();
  ::Vpn_graph* mutable_vpn_graph();
  void set_allocated_vpn_graph(::Vpn_graph* value);
  void unsafe_arena_set_allocated_vpn_graph(::Vpn_graph* value);
  ::Vpn_graph* unsafe_arena_release_vpn_graph();

  private:
  const ::Vpn_graph& _internal_vpn_graph() const;
  ::Vpn_graph* _internal_mutable_vpn_graph();

  public:
  void clear_payload();
  PayloadCase payload_case() const;
  // @@protoc_insertion_point(class_scope:Wrapper)
 private:
  class _Internal;
  void set_has_user();
  void set_has_person();
  void set_has_message();
  void set_has_auth();
  void set_has_report();
  void set_has_serevr();
  void set_has_invite_link();
  void set_has_vpn_graph();

  inline bool has_payload() const;
  inline void clear_has_payload();

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 9, 8,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::uint32_t route_;
    union PayloadUnion {
      constexpr PayloadUnion() : _constinit_{} {}
        ::google::protobuf::internal::ConstantInitialized _constinit_;
      ::User* user_;
      ::Person* person_;
      ::Message* message_;
      ::Auth* auth_;
      ::Report* report_;
      ::Server* serevr_;
      ::Invite_link* invite_link_;
      ::Vpn_graph* vpn_graph_;
    } payload_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t _oneof_case_[1];

    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_wrapper_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Wrapper

// .User user = 1;
inline bool Wrapper::has_user() const {
  return payload_case() == kUser;
}
inline bool Wrapper::_internal_has_user() const {
  return payload_case() == kUser;
}
inline void Wrapper::set_has_user() {
  _impl_._oneof_case_[0] = kUser;
}
inline ::User* Wrapper::release_user() {
  // @@protoc_insertion_point(field_release:Wrapper.user)
  if (payload_case() == kUser) {
    clear_has_payload();
    auto* temp = _impl_.payload_.user_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.user_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::User& Wrapper::_internal_user() const {
  return payload_case() == kUser ? *_impl_.payload_.user_ : reinterpret_cast<::User&>(::_User_default_instance_);
}
inline const ::User& Wrapper::user() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.user)
  return _internal_user();
}
inline ::User* Wrapper::unsafe_arena_release_user() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.user)
  if (payload_case() == kUser) {
    clear_has_payload();
    auto* temp = _impl_.payload_.user_;
    _impl_.payload_.user_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_user(::User* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_user();
    _impl_.payload_.user_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.user)
}
inline ::User* Wrapper::_internal_mutable_user() {
  if (payload_case() != kUser) {
    clear_payload();
    set_has_user();
    _impl_.payload_.user_ = CreateMaybeMessage<::User>(GetArena());
  }
  return _impl_.payload_.user_;
}
inline ::User* Wrapper::mutable_user() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::User* _msg = _internal_mutable_user();
  // @@protoc_insertion_point(field_mutable:Wrapper.user)
  return _msg;
}

// .Person person = 2;
inline bool Wrapper::has_person() const {
  return payload_case() == kPerson;
}
inline bool Wrapper::_internal_has_person() const {
  return payload_case() == kPerson;
}
inline void Wrapper::set_has_person() {
  _impl_._oneof_case_[0] = kPerson;
}
inline ::Person* Wrapper::release_person() {
  // @@protoc_insertion_point(field_release:Wrapper.person)
  if (payload_case() == kPerson) {
    clear_has_payload();
    auto* temp = _impl_.payload_.person_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.person_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Person& Wrapper::_internal_person() const {
  return payload_case() == kPerson ? *_impl_.payload_.person_ : reinterpret_cast<::Person&>(::_Person_default_instance_);
}
inline const ::Person& Wrapper::person() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.person)
  return _internal_person();
}
inline ::Person* Wrapper::unsafe_arena_release_person() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.person)
  if (payload_case() == kPerson) {
    clear_has_payload();
    auto* temp = _impl_.payload_.person_;
    _impl_.payload_.person_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_person(::Person* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_person();
    _impl_.payload_.person_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.person)
}
inline ::Person* Wrapper::_internal_mutable_person() {
  if (payload_case() != kPerson) {
    clear_payload();
    set_has_person();
    _impl_.payload_.person_ = CreateMaybeMessage<::Person>(GetArena());
  }
  return _impl_.payload_.person_;
}
inline ::Person* Wrapper::mutable_person() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::Person* _msg = _internal_mutable_person();
  // @@protoc_insertion_point(field_mutable:Wrapper.person)
  return _msg;
}

// .Message message = 3;
inline bool Wrapper::has_message() const {
  return payload_case() == kMessage;
}
inline bool Wrapper::_internal_has_message() const {
  return payload_case() == kMessage;
}
inline void Wrapper::set_has_message() {
  _impl_._oneof_case_[0] = kMessage;
}
inline ::Message* Wrapper::release_message() {
  // @@protoc_insertion_point(field_release:Wrapper.message)
  if (payload_case() == kMessage) {
    clear_has_payload();
    auto* temp = _impl_.payload_.message_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.message_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Message& Wrapper::_internal_message() const {
  return payload_case() == kMessage ? *_impl_.payload_.message_ : reinterpret_cast<::Message&>(::_Message_default_instance_);
}
inline const ::Message& Wrapper::message() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.message)
  return _internal_message();
}
inline ::Message* Wrapper::unsafe_arena_release_message() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.message)
  if (payload_case() == kMessage) {
    clear_has_payload();
    auto* temp = _impl_.payload_.message_;
    _impl_.payload_.message_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_message(::Message* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_message();
    _impl_.payload_.message_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.message)
}
inline ::Message* Wrapper::_internal_mutable_message() {
  if (payload_case() != kMessage) {
    clear_payload();
    set_has_message();
    _impl_.payload_.message_ = CreateMaybeMessage<::Message>(GetArena());
  }
  return _impl_.payload_.message_;
}
inline ::Message* Wrapper::mutable_message() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::Message* _msg = _internal_mutable_message();
  // @@protoc_insertion_point(field_mutable:Wrapper.message)
  return _msg;
}

// .Auth auth = 4;
inline bool Wrapper::has_auth() const {
  return payload_case() == kAuth;
}
inline bool Wrapper::_internal_has_auth() const {
  return payload_case() == kAuth;
}
inline void Wrapper::set_has_auth() {
  _impl_._oneof_case_[0] = kAuth;
}
inline ::Auth* Wrapper::release_auth() {
  // @@protoc_insertion_point(field_release:Wrapper.auth)
  if (payload_case() == kAuth) {
    clear_has_payload();
    auto* temp = _impl_.payload_.auth_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.auth_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Auth& Wrapper::_internal_auth() const {
  return payload_case() == kAuth ? *_impl_.payload_.auth_ : reinterpret_cast<::Auth&>(::_Auth_default_instance_);
}
inline const ::Auth& Wrapper::auth() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.auth)
  return _internal_auth();
}
inline ::Auth* Wrapper::unsafe_arena_release_auth() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.auth)
  if (payload_case() == kAuth) {
    clear_has_payload();
    auto* temp = _impl_.payload_.auth_;
    _impl_.payload_.auth_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_auth(::Auth* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_auth();
    _impl_.payload_.auth_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.auth)
}
inline ::Auth* Wrapper::_internal_mutable_auth() {
  if (payload_case() != kAuth) {
    clear_payload();
    set_has_auth();
    _impl_.payload_.auth_ = CreateMaybeMessage<::Auth>(GetArena());
  }
  return _impl_.payload_.auth_;
}
inline ::Auth* Wrapper::mutable_auth() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::Auth* _msg = _internal_mutable_auth();
  // @@protoc_insertion_point(field_mutable:Wrapper.auth)
  return _msg;
}

// .Report report = 5;
inline bool Wrapper::has_report() const {
  return payload_case() == kReport;
}
inline bool Wrapper::_internal_has_report() const {
  return payload_case() == kReport;
}
inline void Wrapper::set_has_report() {
  _impl_._oneof_case_[0] = kReport;
}
inline ::Report* Wrapper::release_report() {
  // @@protoc_insertion_point(field_release:Wrapper.report)
  if (payload_case() == kReport) {
    clear_has_payload();
    auto* temp = _impl_.payload_.report_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.report_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Report& Wrapper::_internal_report() const {
  return payload_case() == kReport ? *_impl_.payload_.report_ : reinterpret_cast<::Report&>(::_Report_default_instance_);
}
inline const ::Report& Wrapper::report() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.report)
  return _internal_report();
}
inline ::Report* Wrapper::unsafe_arena_release_report() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.report)
  if (payload_case() == kReport) {
    clear_has_payload();
    auto* temp = _impl_.payload_.report_;
    _impl_.payload_.report_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_report(::Report* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_report();
    _impl_.payload_.report_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.report)
}
inline ::Report* Wrapper::_internal_mutable_report() {
  if (payload_case() != kReport) {
    clear_payload();
    set_has_report();
    _impl_.payload_.report_ = CreateMaybeMessage<::Report>(GetArena());
  }
  return _impl_.payload_.report_;
}
inline ::Report* Wrapper::mutable_report() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::Report* _msg = _internal_mutable_report();
  // @@protoc_insertion_point(field_mutable:Wrapper.report)
  return _msg;
}

// .Server serevr = 6;
inline bool Wrapper::has_serevr() const {
  return payload_case() == kSerevr;
}
inline bool Wrapper::_internal_has_serevr() const {
  return payload_case() == kSerevr;
}
inline void Wrapper::set_has_serevr() {
  _impl_._oneof_case_[0] = kSerevr;
}
inline ::Server* Wrapper::release_serevr() {
  // @@protoc_insertion_point(field_release:Wrapper.serevr)
  if (payload_case() == kSerevr) {
    clear_has_payload();
    auto* temp = _impl_.payload_.serevr_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.serevr_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Server& Wrapper::_internal_serevr() const {
  return payload_case() == kSerevr ? *_impl_.payload_.serevr_ : reinterpret_cast<::Server&>(::_Server_default_instance_);
}
inline const ::Server& Wrapper::serevr() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.serevr)
  return _internal_serevr();
}
inline ::Server* Wrapper::unsafe_arena_release_serevr() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.serevr)
  if (payload_case() == kSerevr) {
    clear_has_payload();
    auto* temp = _impl_.payload_.serevr_;
    _impl_.payload_.serevr_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_serevr(::Server* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_serevr();
    _impl_.payload_.serevr_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.serevr)
}
inline ::Server* Wrapper::_internal_mutable_serevr() {
  if (payload_case() != kSerevr) {
    clear_payload();
    set_has_serevr();
    _impl_.payload_.serevr_ = CreateMaybeMessage<::Server>(GetArena());
  }
  return _impl_.payload_.serevr_;
}
inline ::Server* Wrapper::mutable_serevr() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::Server* _msg = _internal_mutable_serevr();
  // @@protoc_insertion_point(field_mutable:Wrapper.serevr)
  return _msg;
}

// .Invite_link invite_link = 7;
inline bool Wrapper::has_invite_link() const {
  return payload_case() == kInviteLink;
}
inline bool Wrapper::_internal_has_invite_link() const {
  return payload_case() == kInviteLink;
}
inline void Wrapper::set_has_invite_link() {
  _impl_._oneof_case_[0] = kInviteLink;
}
inline ::Invite_link* Wrapper::release_invite_link() {
  // @@protoc_insertion_point(field_release:Wrapper.invite_link)
  if (payload_case() == kInviteLink) {
    clear_has_payload();
    auto* temp = _impl_.payload_.invite_link_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.invite_link_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Invite_link& Wrapper::_internal_invite_link() const {
  return payload_case() == kInviteLink ? *_impl_.payload_.invite_link_ : reinterpret_cast<::Invite_link&>(::_Invite_link_default_instance_);
}
inline const ::Invite_link& Wrapper::invite_link() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.invite_link)
  return _internal_invite_link();
}
inline ::Invite_link* Wrapper::unsafe_arena_release_invite_link() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.invite_link)
  if (payload_case() == kInviteLink) {
    clear_has_payload();
    auto* temp = _impl_.payload_.invite_link_;
    _impl_.payload_.invite_link_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_invite_link(::Invite_link* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_invite_link();
    _impl_.payload_.invite_link_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.invite_link)
}
inline ::Invite_link* Wrapper::_internal_mutable_invite_link() {
  if (payload_case() != kInviteLink) {
    clear_payload();
    set_has_invite_link();
    _impl_.payload_.invite_link_ = CreateMaybeMessage<::Invite_link>(GetArena());
  }
  return _impl_.payload_.invite_link_;
}
inline ::Invite_link* Wrapper::mutable_invite_link() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::Invite_link* _msg = _internal_mutable_invite_link();
  // @@protoc_insertion_point(field_mutable:Wrapper.invite_link)
  return _msg;
}

// .Vpn_graph vpn_graph = 8;
inline bool Wrapper::has_vpn_graph() const {
  return payload_case() == kVpnGraph;
}
inline bool Wrapper::_internal_has_vpn_graph() const {
  return payload_case() == kVpnGraph;
}
inline void Wrapper::set_has_vpn_graph() {
  _impl_._oneof_case_[0] = kVpnGraph;
}
inline ::Vpn_graph* Wrapper::release_vpn_graph() {
  // @@protoc_insertion_point(field_release:Wrapper.vpn_graph)
  if (payload_case() == kVpnGraph) {
    clear_has_payload();
    auto* temp = _impl_.payload_.vpn_graph_;
    if (GetArena() != nullptr) {
      temp = ::google::protobuf::internal::DuplicateIfNonNull(temp);
    }
    _impl_.payload_.vpn_graph_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline const ::Vpn_graph& Wrapper::_internal_vpn_graph() const {
  return payload_case() == kVpnGraph ? *_impl_.payload_.vpn_graph_ : reinterpret_cast<::Vpn_graph&>(::_Vpn_graph_default_instance_);
}
inline const ::Vpn_graph& Wrapper::vpn_graph() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Wrapper.vpn_graph)
  return _internal_vpn_graph();
}
inline ::Vpn_graph* Wrapper::unsafe_arena_release_vpn_graph() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Wrapper.vpn_graph)
  if (payload_case() == kVpnGraph) {
    clear_has_payload();
    auto* temp = _impl_.payload_.vpn_graph_;
    _impl_.payload_.vpn_graph_ = nullptr;
    return temp;
  } else {
    return nullptr;
  }
}
inline void Wrapper::unsafe_arena_set_allocated_vpn_graph(::Vpn_graph* value) {
  // We rely on the oneof clear method to free the earlier contents
  // of this oneof. We can directly use the pointer we're given to
  // set the new value.
  clear_payload();
  if (value) {
    set_has_vpn_graph();
    _impl_.payload_.vpn_graph_ = value;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Wrapper.vpn_graph)
}
inline ::Vpn_graph* Wrapper::_internal_mutable_vpn_graph() {
  if (payload_case() != kVpnGraph) {
    clear_payload();
    set_has_vpn_graph();
    _impl_.payload_.vpn_graph_ = CreateMaybeMessage<::Vpn_graph>(GetArena());
  }
  return _impl_.payload_.vpn_graph_;
}
inline ::Vpn_graph* Wrapper::mutable_vpn_graph() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::Vpn_graph* _msg = _internal_mutable_vpn_graph();
  // @@protoc_insertion_point(field_mutable:Wrapper.vpn_graph)
  return _msg;
}

// uint32 route = 9;
inline void Wrapper::clear_route() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.route_ = 0u;
}
inline ::uint32_t Wrapper::route() const {
  // @@protoc_insertion_point(field_get:Wrapper.route)
  return _internal_route();
}
inline void Wrapper::set_route(::uint32_t value) {
  _internal_set_route(value);
  // @@protoc_insertion_point(field_set:Wrapper.route)
}
inline ::uint32_t Wrapper::_internal_route() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.route_;
}
inline void Wrapper::_internal_set_route(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.route_ = value;
}

inline bool Wrapper::has_payload() const {
  return payload_case() != PAYLOAD_NOT_SET;
}
inline void Wrapper::clear_has_payload() {
  _impl_._oneof_case_[0] = PAYLOAD_NOT_SET;
}
inline Wrapper::PayloadCase Wrapper::payload_case() const {
  return Wrapper::PayloadCase(_impl_._oneof_case_[0]);
}
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_wrapper_2eproto_2epb_2eh
