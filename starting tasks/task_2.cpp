# include <iostream>

int main() {
    int number;

    std::cout <<"enter a numder:"; std::cin>> number;

    if (number > 0) {
       std::cout <<"the number is positive" <<std::endl;
    }

    else if (number < 0) {
       std::cout <<"the number is negative" << std::endl;
    }

    else {
      std::cout <<"the number is zero" << std::endl;
    }
   
    return 0;

}

