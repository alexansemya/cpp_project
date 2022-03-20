#ifndef TP_PROJECT_2022_GENERALSYSTEM_H
#define TP_PROJECT_2022_GENERALSYSTEM_H
#include "Student.h"
#include "Teacher.h"
#include "Subject.h"

class GeneralSystem{
    private:
        static std::vector<Student> students_list;
        static std::vector<Teacher> teachers_list;
        static std::vector<Subject> subjects_list;
    public:
        GeneralSystem(const std::vector<Student> &students_list, const std::vector<Teacher> &teachers_list, const std::vector<Subject> &subjects_list);
        std::vector<Student> GetStudentsList() const {return students_list;}
        std::vector<Teacher> GetTeachersList() const {return teachers_list;}
        std::vector<Subject> GetSubjectsList() const {return subjects_list;}
};


#endif //TP_PROJECT_2022_GENERALSYSTEM_H
