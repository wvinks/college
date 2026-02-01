// Read N numbers and count how many are prime

#include <iostream>

bool check(int a) {
	if (a <= 1) {
	    return false;
        }

        for (int i = 2; i*i <= a; i++) {
             if (a % i == 0) {
                 return false;
             } 
        }

       return true;
}

int main() {
    int n;
    int count = 0;

    std::cout << "enter how many numbers: ";
    std::cin >> n;

    std::cout << "enter a numbers: ";

    for (int i = 0; i < n; i++) {
         int x;
         std::cin >> x;

         if (check(x)) {
             count++;
         }
    }

    std::cout << "amount of prime numbers: " << count <<  std::endl;

return 0;
}

