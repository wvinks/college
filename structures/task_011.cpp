// Зчитай дані про 3 студентів (ім'я, бал) та виведи їх у таблиці

#include <iostream>

typedef struct {
        std::string name;
        double grade;
} Student;

int main() {

    Student student1;
    Student student2;
    Student student3;

    std::cout << "Student 1 - name: ";
    std::getline(std::cin, student1.name);

    std::cout << "Student 1 - grade: ";
    std::cin >> student1.grade;

    std::cin.ignore();

    std::cout << "Student 2 - name: ";
    std::getline(std::cin, student2.name);

    std::cout << "Student 2 - grade: ";
    std::cin >> student2.grade;

    std::cin.ignore();

    std::cout << "Student 3 - name: ";
    std::getline(std::cin, student3.name);

    std::cout << "Student 3 - grade: ";
    std::cin >> student3.grade;

    std::cout << "                                      " << std::endl;
    std::cout << "Results:                              " << std::endl;
    std::cout << student1.name << " - " << student1.grade << std::endl;
    std::cout << student2.name << " - " << student2.grade << std::endl;
    std::cout << student3.name << " - " << student3.grade << std::endl;


return 0;
}
