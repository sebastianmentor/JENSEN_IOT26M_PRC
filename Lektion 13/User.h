#ifndef USER_CLASS_H
#define USER_CLASS_H

#include <string>

class User
{
protected:
    std::string username_;
private:
    std::string password_;

public:
    User(std::string username, std::string password);
    bool authenticate(std::string password);
    bool change_password(std::string old_password, std::string new_password);
    const std::string& get_username() const;
};

#endif