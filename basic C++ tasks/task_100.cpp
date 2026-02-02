// Create a dynamic array of N integers. Calculate and print the average of only positive elements

#include <iostream>

int main() {
    int n = 0;
    double sum = 0;
    int count_positive = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
         if (arr[i] > 0) {
             sum = sum + arr[i];
             count_positive++;
         }
    }

    if (count_positive == 0) {
        std::cout << "no positive numbers" << std::endl;
    }

    else {
         double r = sum/count_positive;
         std::cout << "average of only positive elements: " << r << std::endl;
    }

    delete[] arr;

return 0;
}
