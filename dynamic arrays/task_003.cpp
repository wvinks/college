// Повернути true, якщо вектор порожній

#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;

    bool is_empty();
};

bool int_vector::is_empty() {
    if (size == 0) {
        return true;
    }
    return false;
}

int main() {
    return 0;
}
