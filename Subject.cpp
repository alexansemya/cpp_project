#include "../include/Subject.h"

Subject::Subject(const std::string &name, const std::vector<Teacher> &teachers_list,
                 const std::map<int, std::vector<Question>> &questions_list, int id) {
    this->name = name;
    this->teachers_list = teachers_list;
    this->questions_list = questions_list;
    this->id = id;
}

void Subject::AddTeacher(Teacher &teacher) {
    teachers_list.push_back(teacher);
}
void Subject::AddQuestion(Question &question) {
    std::cout << "Enter the question difficulty" << std::endl;
    int difficulty;
    std::cin >> difficulty;
}


