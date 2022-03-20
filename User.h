#ifndef TP_PROJECT_2022_USER_H
#define TP_PROJECT_2022_USER_H
#include <string>
#include "GeneralSystem.h"

class User {
    private:
        std::string name;
        int id;
        std::string password;
    public:
        User(const std::string &name, int id, const std::string &password);
        std::string GetName() const {return name;}
        int GetId() const {return id;}
        std::string GetPassword() const {return password;}
        virtual void SignIn(GeneralSystem &general_system) = 0;
        virtual void SignUp(GeneralSystem &general_system) = 0;
};

#endif //TP_PROJECT_2022_USER_H
