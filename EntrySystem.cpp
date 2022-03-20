#include "../include/EntrySystem.h"

 int EntrySystem::ChooseEntryType() {
    std::cout << "Кто вы ? \n 1.Студент 2.Преподаватель";
    int type_;
    std::cin >> type_;
    return type_;
}
 int EntrySystem::ChooseEntryOption() {
    std::cout << "Выберите параметр входа \n 1.Регистрация 2.Авторизация" << std::endl;
    int option_;
    std::cin >> option_;
    return option_;
}


