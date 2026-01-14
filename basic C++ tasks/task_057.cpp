// Read N numbers. Print the average of even numbers

#include <iostream>

int main() {
    int n;
    double av = 0;
    int sum = 0;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (x%2 == 0) {
             count++;
             sum = sum + x;
         }
    }


    if (count > 0) {
        av = (double)sum/count;
        std::cout << "average of even numbers: " << av << std::endl;
    }

    else {
         std::cout << "there are no even numbers" << std::endl;
    }

return 0;
}
