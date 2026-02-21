// Write a function that takes a dynamic array through a pointer and returns the number of positive elements

#include <iostream>

int countPositive(int* arr, int n) {
                  int count = 0;
		  for (int i = 0; i < n; i++) {
                       if (arr[i] > 0) {
                           count++;
                       }
                  }

return count;
}

int main() {
    int n1 = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n1;

    int* arr1 = new int[n1];

    std::cout << "enter a numbers: ";
    for(int i = 0; i < n1; i++) {
        std::cin >> arr1[i];
    }

    int result = countPositive(arr1, n1);

    std::cout << "positive numbers: " << result << std::endl;

    delete[] arr1;

return 0;
}
