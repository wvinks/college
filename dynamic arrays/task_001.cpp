// Видалити останній елемент вектора

#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;

    void pop_back();
};

void int_vector::pop_back() {
    if (size > 0) {
        size--;
    }
}

int main() {
    return 0;
}

