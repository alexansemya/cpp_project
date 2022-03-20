#include "../include/GeneralSystem.h"

GeneralSystem::GeneralSystem(const std::vector<Student> &students_list, const std::vector<Teacher> &teachers_list,
                             const std::vector<Subject> &subjects_list) {
    this->students_list = students_list;
    this->teachers_list = teachers_list;
    this->subjects_list = subjects_list;

}
