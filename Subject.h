#ifndef TP_PROJECT_2022_SUBJECT_H
#define TP_PROJECT_2022_SUBJECT_H
#include <map>
#include <vector>
#include <iostream>
#include "Teacher.h"
#include "Question.h"

class Subject : public std::error_code {
    private :
        std::string name;
        std::vector<Teacher> teachers_list;
        std::map<int, std::vector<Question>> questions_list;
        int id;
    public :
        Subject(const std::string &name, const std::vector<Teacher> &teachers_list, const std::map<int, std::vector<Question>> &questions_list, int id);
        std::string GetName() const {return name;}
        std::vector<Teacher> GetTeachersList() const {return teachers_list;}
        std::map<int, std::vector<Question>> GetQuestionsList() const {return questions_list;}
        int GetId() const {return id;}
        void AddTeacher(Teacher &teacher);
        void AddQuestion(Question &question);
};

#endif //TP_PROJECT_2022_SUBJECT_H
