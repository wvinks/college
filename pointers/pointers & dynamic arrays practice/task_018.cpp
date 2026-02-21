// Find all indexes of a given number in a dynamic array

#include <iostream>

int main() {
    int n;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "enter a numbers: ";
    for (int i = 0; i < n; i++) {
         std::cin >> arr[i];
    }

    int num;

    std::cout << "enter the number whoose indices you want to find: ";
    std::cin >> num;

    int count = 0;
    int* index_arr = new int[n];

    for (int i = 0; i < n; i++) {
         if (arr[i] == num) {
             index_arr[count] = i;
             count++;
         }
    }

    if (count == 0) {
        std::cout << "number not found" << std::endl;
    }

    else {
         std::cout << "indices at which the number you specify is located: ";
         for (int i = 0; i < count; i++) {
              std::cout << index_arr[i] << " ";
         }
    }

    std::cout << std::endl;

    delete[] arr;
    delete[] index_arr;

return 0;
}
