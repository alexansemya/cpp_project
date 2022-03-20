
#ifndef TP_PROJECT_2022_STUDENTEXAMSYSTEM_H
#define TP_PROJECT_2022_STUDENTEXAMSYSTEM_H
#include <string>
#include <random>
#include "Student.h"
#include "Teacher.h"
#include "Subject.h"


class StudentExamSystem{
    private:
        Student *student;
        Subject *subject;
        int difficulty;
        int mark;
        int right_answer_counter;
    public:
        StudentExamSystem(Student *student, Subject *subject, int difficulty, int right_answer_counter);
        std::string AssignQuestion(Subject subject, int difficulty);
        void AcceptAnswer(Question question, int right_answer);
        Teacher AssignTeacher(Subject subject);
//      void Connect(Student student_, Teacher teacher_); Реализация через сокеты
        Student GetStudent() const {return *student;}
        Subject GetSubject() const {return *subject;}
        int GetDifficulty() const{return difficulty;}
        int GetRightAnswerCounter() const {return right_answer_counter;}
        int GetMark() const {return mark;}
        void SetRightAnswerCounter(int right_answer_counter);
};


#endif //TP_PROJECT_2022_STUDENTEXAMSYSTEM_H
