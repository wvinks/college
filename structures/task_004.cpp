// Оголоси структуру Time (години, хвилини, секунди). Зчитай час та виведи загальну кількість секунд з початку доби

#include <iostream>

typedef struct {
        int hours;
        int minutes;
        int seconds;
} Time;

int main() {
    Time time1;

    std::cout << "Enter hours (in 24-hours format): ";
    std::cin >> time1.hours;

    std::cout << "Enter minutes: ";
    std::cin >> time1.minutes;

    std::cout << "Enter seconds: ";
    std::cin >> time1.seconds;

    int HoursToSeconds = time1.hours * 3600;
    int MinutesToSeconds = time1.minutes * 60;

    int r = HoursToSeconds + MinutesToSeconds + time1.seconds;

    std::cout << "Total seconds: " << r << std::endl;

return 0;
}
