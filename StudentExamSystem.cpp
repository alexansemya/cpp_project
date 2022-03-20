#include "../include/StudentExamSystem.h"

StudentExamSystem::StudentExamSystem(Student *student, Subject *subject, int difficulty,
                                     int right_answer_counter) {
    this->student = student;
    this->subject = subject;
    this->difficulty = difficulty;
    this->right_answer_counter = right_answer_counter;
}


void StudentExamSystem::SetRightAnswerCounter(int right_answer_counter){
    this->right_answer_counter = right_answer_counter;
}

std::string StudentExamSystem::AssignQuestion(Subject subject, int difficulty) {
    std::vector<Question> question_list = subject.GetQuestionsList()[difficulty];
    int rand_number = rand() % question_list.size();
    std::string question = question_list[rand_number].GetQuestion();
    return question;
}


void StudentExamSystem::AcceptAnswer(Question question, int answer) {
    if (question.GetRightAnswer() == answer){
        StudentExamSystem::SetRightAnswerCounter(StudentExamSystem::GetRightAnswerCounter() + 1);
    }
}
