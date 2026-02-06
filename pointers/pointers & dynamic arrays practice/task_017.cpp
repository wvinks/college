// Create a dynamic array with random numbers and find the average 

#include <iostream>
#include <ctime> 
#include <cstdlib>

int main() {
    int n;
    std::cout << "enter how many numbers: ";
    std::cin >> n;

    int* arr = new int[n];
    srand(time(0));

    double sum = 0;

    std::cout << "random array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
        sum = sum + arr[i];
    }

    std::cout << std::endl;

    double average = sum / n;
    std::cout << "average: " << average << std::endl;

    delete[] arr;

return 0;
}
