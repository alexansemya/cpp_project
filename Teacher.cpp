#include "Teacher.h"

Teacher::Teacher(const std::string &name, int id,
                 const std::string &password, const std::string &department) : User(name, id, password) {
    this->department = department;
}

void Teacher::SignUp(GeneralSystem &general_system) {
    std::string name;
    int id;
    std::string department;
    std::string password;
    std::cout << "Введите ФИО" << std::endl;
    std::cin >> name;
    std::cout << "Введите кафедру" << std::endl;
    std::cin >> department;
    std::cout << "Выберите предметы, которые будете принимать" << std::endl;
    for (const Subject& subject : general_system.GetSubjectsList()){
        int choose;
        std::cout << "Принимаете ли вы " << subject.GetName() <<" ?\n 1. Да 2. Нет";
        std::cin >> choose;
        if (choose == 1) {
        subject.GetTeachersList().push_back(name);
        }
    }
    std::cout << "Придумайте пароль" << std::endl;
    std::cin >> password;
    id = general_system.GetTeachersList().size() + general_system.GetStudentsList().size();
    Teacher teacher(name, id, password, department);
    std::cout << "Вы успешно зарегестрированы. Ваш уникальный id : " << id << std::endl;
}

void Teacher::SignIn(GeneralSystem &general_system) {
    std::vector<Teacher> teachers_list = general_system.GetTeachersList();
    int id;
    std::string password;
    bool login_is_correct = false;
    while (!login_is_correct){
        std::cout << "Введите ваш id" << std::endl;
        std::cin >> id;
        std::cout << "Введите ваш пароль" << std::endl;
        std::cin >> password;
        for(const Teacher &teacher : teachers_list){
            if (teacher.GetId() == id && teacher.GetPassword() == password) {
            login_is_correct = true;
            }
        }
        if (!login_is_correct){
        std::cout << "Ошибка! Попробуйте снова!" << std::endl;
        }
    }
    std::cout << "Вы успешно вошли в систему!";
}
