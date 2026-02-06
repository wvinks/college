// Insert a new element at a given position in a dynamic array

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

    int index = 0;

    std::cout << "enter index to insert: ";
    std::cin >> index;

    int num;

    std::cout << "enter number to insert: ";
    std::cin >> num;

    if (index < 0 || index > n) {
        std::cout << "invalid index" << std::endl;
        delete[] arr;
        return 0;
   }

   int* new_arr = new int[n + 1];

   for (int i = 0; i < index; i++) {
        new_arr[i] = arr[i];
   }

   new_arr[index] = num;

   for (int i = index; i < n; i++) {
        new_arr[i + 1] = arr[i];
   }

   std::cout << "updated array: ";
   for (int i = 0; i < n + 1; i++) {
        std::cout << new_arr[i] << " ";
   }

   std::cout << std::endl;

   delete[] arr;
   delete[] new_arr;

return 0;
}
