#include "User.h"

User::User(std::string username, std::string password)
    :username_(username),password_(password){}


bool User::authenticate(std::string password){
    return password == password_;
}

bool User::change_password(std::string old_password, std::string new_password){
    if(authenticate(old_password)){
        password_ = new_password;
        return true;
    }
    return false;
}

const std::string& User::get_username() const{
    return username_;
}
