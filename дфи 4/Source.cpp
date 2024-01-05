#include "Multiplier.h"
#include "ArraySorter.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Використання шаблонного класу Multiplier
    Multiplier<int> intMultiplier;
    int intValue;
    std::cout << "Enter an integer: ";
    std::cin >> intValue;
    int resultInt = intMultiplier.multiplyByTwo(intValue);
    std::cout << "Result for integer: " << resultInt << std::endl;

    Multiplier<double> doubleMultiplier;
    double doubleValue;
    std::cout << "Enter a real number: ";
    std::cin >> doubleValue;
    double resultDouble = doubleMultiplier.multiplyByTwo(doubleValue);
    std::cout << "Result for double: " << resultDouble << std::endl;

    // Використання шаблонної функції multiplyByTwoFunction
    int intValueFunction;
    std::cout << "Enter another integer: ";
    std::cin >> intValueFunction;
    int resultIntFunction = multiplyByTwoFunction(intValueFunction);
    std::cout << "Result for integer using function: " << resultIntFunction << std::endl;

    double doubleValueFunction;
    std::cout << "Enter another real number: ";
    std::cin >> doubleValueFunction;
    double resultDoubleFunction = multiplyByTwoFunction(doubleValueFunction);
    std::cout << "Result for double using function: " << resultDoubleFunction << std::endl;

    // Використання шаблонного класу ArraySorter
    std::srand(std::time(0)); // Ініціалізація генератора випадкових чисел

    size_t arraySize;
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    int* intArray = new int[arraySize];
    for (size_t i = 0; i < arraySize; ++i) {
        intArray[i] = std::rand() % 100; // Генерація випадкових цілих чисел в межах [0, 99]
    }

    ArraySorter<int> intSorter(intArray, arraySize);

    std::cout << "Original integer array: ";
    intSorter.print();

    intSorter.sort();

    std::cout << "Sorted integer array: ";
    intSorter.print();

    delete[] intArray;

    return 0;
}
