#include "../include/Question.h"

Question::Question(const std::string &question,const std::vector<std::string> &possible_answers, int right_answer) {
    this->question = question;
    this->possible_answers = possible_answers;
    this->right_answer = right_answer;
}
