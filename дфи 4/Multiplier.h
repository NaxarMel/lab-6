#pragma once

// ��������� ����
template <typename T>
class Multiplier {
public:
    T multiplyByTwo(const T& value) {
        return value * 2;
    }
};

// �������� �������
template <typename T>
T multiplyByTwoFunction(const T& value) {
    return value * 2;
}
// ������� ������ ������� ������� � ���� 