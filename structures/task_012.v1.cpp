// Зчитай дані про 3 студентів та знайди студента з найвищим балом
// This version of the task was performed using the "string" library

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

    double maxGrade = student1.grade;
    std::string bestName = student1.name;

    if (student2.grade > maxGrade) {
        maxGrade = student2.grade;
        bestName = student2.name;
    }

    if (student3.grade > maxGrade) {
        maxGrade = student3.grade;
        bestName = student3.name;
    }

    std::cout << "Best student: " << bestName << " (" << maxGrade << ")" << std::endl;

return 0;
}
