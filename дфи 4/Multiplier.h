#pragma once

// Шаблонний клас
template <typename T>
class Multiplier {
public:
    T multiplyByTwo(const T& value) {
        return value * 2;
    }
};

// Шаблонна функція
template <typename T>
T multiplyByTwoFunction(const T& value) {
    return value * 2;
}
// Зробити окремо шаблону функцію і клас 