#include "RouteManager.h"
#include "../error-manager/ErrorManager.h"

void RouteManager::InitScyllaDb() { ScyllaManager::initScyllaManager(); }

Lxcode RouteManager::handleAuth(const Payload &payload) {
    Lxcode return_code;
    return_code.error_code = 0x00;
    return_code.is_successful = true;
    if (std::holds_alternative<Auth>(payload)) {
        const Auth &auth = std::get<Auth>(payload);

        if (auth.has_sign_up())
            return handleSignUp(auth.sign_up());
        return handleSignIn(auth.sign_in());

    } else {
        return_code.error_code = 0x01;
        return_code.is_successful = false;
        return return_code;
    }
}

Lxcode RouteManager::handleReport(const Payload &payload) {
    Lxcode return_code;
    return_code.error_code = 0x00;
    return_code.is_successful = true;
    if (std::holds_alternative<Report>(payload)) {
        const Report &report = std::get<Report>(payload);

        return return_code;
    } else {
        return_code.error_code = 0x01;
        return_code.is_successful = false;
        return return_code;
    }
}

Lxcode RouteManager::handleSignUp(const Payload &payload) {
    Lxcode return_code = Lxcode::OK();

    if (std::holds_alternative<Sign_up>(payload)) {
        const Sign_up &sign_up = std::get<Sign_up>(payload);

        User u;
        u.set_user_name(sign_up.user_name());
        u.set_user_email(sign_up.user_email());
        u.set_user_password(sign_up.user_password());

        #ifdef USE_SCYLLA_DB
            return_code = ScyllaManager::createUser(sign_up);
        #else
            return_code = DbManager::addUser(u);
        #endif

        if (return_code == Lxcode::OK()) {
            return_code.response = AuthManager::generateToken(
                std::get<User *>(return_code.payload)->user_name().c_str(),
                std::get<User *>(return_code.payload)->user_password().c_str());
            return return_code;
        }

        return return_code;
    } else {
        return Lxcode::UNKNOWN_ERROR(0x0);
    }
}

Lxcode RouteManager::handleSignIn(const Payload &payload) {
    Lxcode return_code = Lxcode::OK();

    std::cout << "handleSignIn" << std::endl;

    if (std::holds_alternative<Sign_in>(payload)) {
        const Sign_in &si = std::get<Sign_in>(payload);


        #ifdef USE_SCYLLA_DB
            return_code = ScyllaManager::getUser(si);
        #else
            return_code = DbManager::getUser(si);
        #endif

        if (return_code == Lxcode::OK()) {

            return_code.response = AuthManager::generateToken(
                std::get<User *>(return_code.payload)->user_name().c_str(),
                std::get<User *>(return_code.payload)->user_password().c_str());
            return return_code;
        }
        return return_code;
    } else {
        return Lxcode::UNKNOWN_ERROR(0x0);
    }
}

Lxcode RouteManager::getMessages(const Payload &payload, std::set<Message> &) {
    Lxcode return_code;
    return_code.error_code = 0x00;
    return_code.is_successful = true;
    if (std::holds_alternative<User>(payload)) {
        const User &user = std::get<User>(payload);

        return return_code;
    } else {
        return_code.error_code = 0x01;
        return_code.is_successful = false;
        return return_code;
    }
}

std::unordered_map<uint8_t, RouteFunction> *RouteManager::routes =
    new std::unordered_map<uint8_t, RouteFunction>(
        {{1, RouteManager::handleAuth}, {2, RouteManager::handleReport}});

RouteManager::~RouteManager() {
    if (routes)
        delete routes;
}
