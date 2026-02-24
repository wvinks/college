// Очистити вектор (size = 0), але не звільняти пам'ять

#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;

    void clear();
};

void int_vector::clear() {
     size = 0;
}

int main() {
    return 0;
}
