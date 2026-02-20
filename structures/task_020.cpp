// Оголоси структури Date, Time і Event (назва, дата, час). Зчитай дані та виведи інформацію про подію

#include <iostream>
#include <string>

typedef struct {
        int year;
        int month;
        int day;
} Date;

typedef struct {
        int hours;
        int minutes;
} Time;

typedef struct {
        Date date;
        Time time;
        std::string name;
} Event;

int main() {

    Event event;

    std::cout << "Event name: ";
    std::getline(std::cin, event.name);

    std::cout << "Date - day: ";
    std::cin >> event.date.day;

    std::cout << "Date - month: ";
    std::cin >> event.date.month;

    std::cout << "Date - year: ";
    std::cin >> event.date.year;

    std::cout << "Time - hours: ";
    std::cin >> event.time.hours;

    std::cout << "Time - minutes: ";
    std::cin >> event.time.minutes;

    std::cout << "       " << std::endl;
    std::cout << "Event: " << event.name << std::endl;
    std::cout << "When: " << event.date.day << "." << event.date.month << "." << event.date.year << " at " << event.time.hours << ":" << event.time.minutes << std::endl;

return 0;
}
