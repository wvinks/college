// Зчитай дані про 3 студентів та обчисли середній бал групи

#include <iostream>
#include <string>

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

    double average = (student1.grade + student2.grade + student3.grade) / 3;

    std::cout << "Average grade: " << average << std::endl;

return 0;
}
