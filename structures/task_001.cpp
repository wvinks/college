// Оголоси структуру Book з полями: назва, автор, рік видання. Зчитай дані про книгу з консолі та виведи у форматі: "Title" by Author (Year)

#include <iostream>
#include <string>

int main() {

    typedef struct {
            std::string title;
            std::string author;
            int year;
    } Book;

    Book book1;

    std::cout << "Enter the title of the book: ";
    std::getline(std::cin, book1.title);

    std::cout << "Enter the author of the book: ";
    std::getline(std::cin, book1.author);

    std::cout << "Enter the year the book was published: ";
    std::cin >> book1.year;

    std::cout << "\"" << book1.title << "\"" << " by " << book1.author << " (" << book1.year << ")" << std::endl;

return 0;
}  
