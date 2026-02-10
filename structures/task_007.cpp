// Зчитай два моменти часу та обчисли різницю в секундах

#include <iostream>
#include <cmath>

typedef struct {
        int hours;
        int minutes;
        int seconds;
} Time;

int main() {

    Time time1;
    Time time2;

    std::cout << "Time 1 - hours (in 24-hours format): ";
    std::cin >> time1.hours;

    std::cout << "Time 1 - minutes: ";
    std::cin >> time1.minutes;

    std::cout << "Time 1 - seconds: ";
    std::cin >> time1.seconds;

    std::cout << "Time 2 - hours (in 24-hours format): ";
    std::cin >> time2.hours;

    std::cout << "Time 2 - minutes: ";
    std::cin >> time2.minutes;

    std::cout << "Time 2 - seconds: ";
    std::cin >> time2.seconds;

    int HoursToSeconds1 = time1.hours * 3600;
    int MinutesToSeconds1 = time1.minutes * 60;
    int total1 = HoursToSeconds1 + MinutesToSeconds1 + time1.seconds;

    int HoursToSeconds2 = time2.hours * 3600;
    int MinutesToSeconds2 = time2.minutes * 60;
    int total2 = HoursToSeconds2 + MinutesToSeconds2 + time2.seconds;

    int difference = std::abs(total2 - total1);

    std::cout << "Difference: " << difference << " seconds" << std::endl;

return 0;
}
