#include "../include/Student.h"

Student::Student(const std::string &name, int id, std::string &password, int group_number,
                 std::map<Subject, int> &report_card) : User(name, id, password){
    this->group_number = group_number;
    this->report_card = report_card;
}

int Student::ChooseDifficulty() {
    std::cout << "Выберите уровень сложности вопросов:\n 1.Отл 2.Хор 3.Уд";
    int difficulty;
    std::cin >> difficulty;
    return difficulty;
}

int Student::AnswerQuestion(Question &question) {
    std::cout << question.GetQuestion() << std::endl;
    int answer;
    std::cin >> answer;
    return answer;
}

Subject Student::ChooseExam(){
    std::cout << "Выберите id предмета, который желаете сдавать" << std::endl;
    std::map<int, Subject> subjects_list;
    for (auto &iterator : report_card){
        if (iterator.second != 0){
            std::cout << iterator.first.GetName() << " " << iterator.first.GetId() << std::endl;
            subjects_list.insert(std::pair<int, Subject>(iterator.first.GetId(), iterator.first));
        }
    }
    int id;
    std::cin >> id;
    return subjects_list[id];
}

void Student::SignUp(GeneralSystem &general_system){
    std::string name;
    int id;
    int group_number;
    std::string password;
    std::map<Subject, int> report_card;
    std::cout << "Введите ФИО" << std::endl;
    std::cin >> name;
    std::cout << "Введите номер группы" << std::endl;
    std::cin >> group_number;
    std::cout << "Выберите предметы, которые собираетесь сдавать" << std::endl;
    for(const Subject &subject : general_system.GetSubjectsList()){
        int choose;
        std::cout << "Сдаете ли вы " << subject.GetName() <<" ?\n 1. Да 2. Нет";
        std::cin >> choose;
        if (choose == 1) {
            report_card.insert(std::pair<Subject, int>(subject, 0));
        }
    }
    std::cout << "Придумайте пароль" << std::endl;
    std::cin >> password;
    id = general_system.GetStudentsList().size() + general_system.GetTeachersList().size();
    Student student(name, id, password, group_number, report_card);
    general_system.GetStudentsList().push_back(student);
    std::cout << "Вы успешно зарегестрированы. Ваш уникальный id : " << id << std::endl;
}

void Student::SignIn(GeneralSystem &general_system){
    std::vector<Student> students_list = &general_system.GetStudentsList();
    int id;
    std::string password;
    bool login_is_correct = false;
    while (!login_is_correct){
        std::cout << "Введите ваш id" << std::endl;
        std::cin >> id;
        std::cout << "Введите ваш пароль" << std::endl;
        std::cin >> password;
        for(const Student &student : students_list){
            if (student.GetId() == id && student.GetPassword() == password) {
                login_is_correct = true;
            }
        }
        if (!login_is_correct){
            std::cout << "Ошибка! Попробуйте снова!" << std::endl;
        }
    }
    std::cout << "Вы успешно вошли в систему!";
}





