// Зчитай дані про 3 студентів та знайди студента з найвищим балом

#include <iostream>
#include <cstring>

typedef struct {
        char name[50];
        double grade;
} Student;

int main() {

    Student student1;
    Student student2;
    Student student3;

    std::cout << "Student 1 - name: ";
    std::cin.getline(student1.name, 50);

    std::cout << "Student 1 - grade: ";
    std::cin >> student1.grade;

    std::cin.ignore();

    std::cout << "Student 2 - name: ";
    std::cin.getline(student2.name, 50);

    std::cout << "Student 2 - grade: ";
    std::cin >> student2.grade;

    std::cin.ignore();

    std::cout << "Student 3 - name: ";
    std::cin.getline(student3.name, 50);

    std::cout << "Student 3 - grade: ";
    std::cin >> student3.grade;

    double maxGrade = student1.grade;
    char bestName[50];
    strcpy(bestName, student1.name);

    if (student2.grade > maxGrade) {
        maxGrade = student2.grade;
        strcpy(bestName, student2.name);
    }

    if (student3.grade > maxGrade) {
        maxGrade = student3.grade;
        strcpy(bestName, student3.name);
    }

    std::cout << "Best student: " << bestName << " (" << maxGrade << ")" << std::endl;

return 0;
}

