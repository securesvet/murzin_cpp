//
// Created by mursv on 4/22/2022.
//
#include<iostream>

int main() {

    std::string inputStringFirst, inputStringSecond, inputStringThird;

    std::cin >> inputStringFirst >> inputStringSecond >> inputStringThird;

    std::string* inputStringMin;

    if (inputStringFirst < inputStringSecond && inputStringFirst < inputStringThird) {
        inputStringMin = &inputStringFirst; // указатель получает адрес лексикографически наименьшей строки
    } else if (inputStringSecond < inputStringFirst && inputStringSecond < inputStringThird) {
        inputStringMin = &inputStringSecond;
    } else {
        inputStringMin = &inputStringThird;
    }

    std::cout << *inputStringMin; // Выводит минимальную строку

    return 0;
}