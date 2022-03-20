#ifndef TP_PROJECT_2022_QUESTION_H
#define TP_PROJECT_2022_QUESTION_H
#include <string>
#include <iostream>
#include <vector>


class Question {
    private :
        std::string question;
        std::vector<std::string> possible_answers;
        int right_answer;
    public :
        Question(const std::string &question,const std::vector<std::string> &possible_answers, int right_answer);
        std::string GetQuestion() const {return question;}
        std::vector<std::string> GetPossibleAnswers() const {return possible_answers;}
        int GetRightAnswer() const {return right_answer;}
};
#endif //TP_PROJECT_2022_QUESTION_H

