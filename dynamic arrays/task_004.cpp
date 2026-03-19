// Повернути посилання на перший елемент

#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;

    int& front();
};

int& int_vector::front() {
	return data[0];
}

int main() {
    return 0;
}

