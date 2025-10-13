#include <iostream>
#include <string>

int main() {
    int x1, x2, x3, y1, y2, y3;

    for (int num = 0; num < 1000000; num++) {
        x1 = (num / 100000) % 10;
        x2 = (num / 10000) % 10;
        x3 = (num / 1000) % 10;
        y1 = (num / 100) % 10;
        y2 = (num / 10) % 10;
        y3 = num % 10;

        if (x1 + x2 + x3 == y1 + y2 + y3) {
            std::string ticket = std::to_string(num);  

           
            while (ticket.length() < 6) {
                ticket = "0" + ticket;
            }

            std::cout << ticket << std::endl;
        }
    }

    return 0;
}
