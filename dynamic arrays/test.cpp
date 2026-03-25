#include <iostream>
#include <cassert>

struct int_vector {
    int* data;
    int size;
    int capacity;

    int_vector(int initial_capacity = 4) {
        data = new int[initial_capacity];
        size = 0;
        capacity = initial_capacity;
    }

    ~int_vector() {
        delete[] data;
    }

    void resize(int new_capacity) {
        int* new_data = new int[new_capacity];
        int to_copy = (size < new_capacity) ? size : new_capacity;
        for (int i = 0; i < to_copy; ++i) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
        size = to_copy;
    }

    void push_back(int value) {
        if (size == capacity) {
            resize(capacity * 2);
        }
        data[size] = value;
        ++size;
    }

    int& at(int index) {
        assert(index >= 0 && index < size);
        return data[index];
    }

    int& operator[](int index) {
        return at(index);
    }

    void print() {
        std::cout << "[";
        for (int i = 0; i < size; ++i) {
            if (i > 0) std::cout << ", ";
            std::cout << data[i];
        }
        std::cout << "] (size=" << size
                  << ", capacity=" << capacity << ")" << std::endl;
    }

    void sort(){
        for (int j = 0; j < size - 1; j++)
        {
            bool swapped = false;
            for (int i = 0; i < size - 1 - j; i++)
            {
                if (data[i] > data[i + 1])
                {
                    int temp = data[i];
                    data[i] = data[i + 1];
                    data[i + 1] = temp;
                    swapped = true;
                }

            }
            if(!swapped){
                break;
            }
        }

    }
    int find(int value){
        for (int i = 0; i < size; i++)
        {
            if (data[i] == value)
            {
                return i;
            }

        }
        return -1;

    }

    int search(int value) {
        int low = 0;
        int high = size - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            std::cout << low << "\t" << mid << "\t" << high << std::endl;

            if (data[low] == value) {
                return low;
            }

            if (data[high] == value) {
                return high;
            }

            if (data[mid] == value) {
                return mid;
            }

            if (value < data[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};
/*
 * n = кількість вхідних даних
 * k = к-ість дій
 * n = 2*2*2*..*2 = 2^k
 * k = logn
 */

int main() {
    int_vector v;

    for(int i = 100; i > 0; i -=10){
        v.push_back(i);
    }
    v[3] = 999;
    v.print();



    v.sort();
    v.print();


    std::cout << v.search(999) << std::endl;
    std::cout << v.search(50) << std::endl;
    std::cout << v.search(9000) << std::endl;


    return 0;
}
