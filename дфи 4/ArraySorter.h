#pragma once
#include <algorithm>
#include <iostream>

// Шаблонний клас 
template <typename T>
class ArraySorter {
public:
    ArraySorter(T* arr, size_t size) : array(arr), arraySize(size) {}

    void sort() {
        std::sort(array, array + arraySize);
    }

    void print() {
        for (size_t i = 0; i < arraySize; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    T* array;
    size_t arraySize;
};
