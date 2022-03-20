#ifndef TP_PROJECT_2022_TEACHER_H
#define TP_PROJECT_2022_TEACHER_H
#include <string>
#include <iostream>
#include "User.h"

class Teacher : public User {
    private :
        std::string department;
    public :
        Teacher(const std::string &name, int id,
                const std::string &password, const std::string &department);
        std::string GetDepartment() const {return department;}
        static void SignIn(GeneralSystem &general_system);
        static void SignUp(GeneralSystem &general_system);

};


#endif //TP_PROJECT_2022_TEACHER_H
