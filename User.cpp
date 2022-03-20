#include "../include/User.h"
User::User(const std::string &name, int id, const std::string &password) {
    this->name = name;
    this->id = id;
    this->password = password;
}