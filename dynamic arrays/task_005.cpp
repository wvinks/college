// Повернути посилання на останній елемент

#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;

    int& back();
};

int& int_vector::back() {
	return data[size - 1];
}

int main() {
    return 0;
}

