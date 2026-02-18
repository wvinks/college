// Оголоси структури Date і Student (з вкладеною датою). Зчитай дані та виведи інформацію про студента

#include <iostream>
#include <string>

typedef struct {
        int day;
        int month;
        int year;
} Date;

typedef struct {
        std::string name;
        Date birthday;
} Student;

int main() {

    Student student1;

    std::cout << "Enter name: ";
    std::getline(std::cin, student1.name);

    std::cout << "Enter day: ";
    std::cin >> student1.birthday.day;

    std::cout << "Enter month: ";
    std::cin >> student1.birthday.month;

    std::cout << "Enter year: ";
    std::cin >> student1.birthday.year;

    std::cout << student1.name << " was born on " << student1.birthday.day << "." << student1.birthday.month << "." << student1.birthday.year << std::endl;

return 0;
}
