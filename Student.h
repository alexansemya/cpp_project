
#ifndef TP_PROJECT_2022_STUDENT_H
#define TP_PROJECT_2022_STUDENT_H
#include <map>
#include <iostream>
#include "User.h"
#include "Question.h"
#include "Subject.h"
#include "GeneralSystem.h"


class Student : public User {
    private:
        int group_number;
        std::map<Subject, int> report_card;
    public:
        Student(const std::string &name, int id, std::string &password, int group_number, std::map<Subject, int> &report_card);
        int GetGroupNumber() {return group_number;}
        std::map<Subject, int> GetReportCard() {return report_card;};
        int ChooseDifficulty();
        int AnswerQuestion(Question &question);
        Subject ChooseExam();
        static void SignIn(GeneralSystem &general_system);
        static void SignUp(GeneralSystem &general_system);
};
#endif //TP_PROJECT_2022_STUDENT_H
