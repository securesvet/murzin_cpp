//
// Created by mursv on 5/27/2022.
//
#include <iostream>
#include <vector>
#include <string>

// Функция  для ввода vector<int>
std::vector<int> vectorInput(int sizeOfVector) {
    std::vector<int> vectorInteger;

    for (int i = 0; i < sizeOfVector; ++i) {
        int inputNum;
        std::cin >> inputNum;
        vectorInteger.push_back(inputNum);
    }

    return vectorInteger;
}

// Функция для перевода vector<std::string> ---> vector<int>
std::vector<int> vectorStringToInteger(std::vector<std::string> inputVectorString) {
    std::vector<int> vectorInteger;
    for (int i = 0; i < inputVectorString.size(); ++i) {
        vectorInteger.at(i) = std::stoi(inputVectorString.at(i));
    }
    return vectorInteger;
}

// Функция для перевода vector<int> ---> vector<std::string>
std::vector<std::string> vectorIntegerToString(std::vector<int> inputVectorInteger) {
    std::vector<std::string> vectorString(inputVectorInteger.size());
    for (int i = 0; i < inputVectorInteger.size(); ++i) {
        vectorString.at(i) = std::to_string(inputVectorInteger.at(i));
    }
    return vectorString;
}

// Функция принимает вектор и разделитель, возвращает строку, где элементы стоят через разделитель
std::string join(std::vector<std::string> inputVectorString, char separator) {
    std::string vectorSeparated;
    for (int i = 0; i < inputVectorString.size() - 1; ++i) {
        vectorSeparated += inputVectorString.at(i) + separator;
    }
    // Чтобы не было вывода наподобие: 1_2_3_ Последний элемент я добавляю вручную
    vectorSeparated += inputVectorString.at(inputVectorString.size() - 1);
    return vectorSeparated;
}

template<typename T> // Нужен, чтобы выводить vector<int> и vector<std::string> одной и той же функцией vectorPrint
// Функция для вывода вектора
void vectorPrint(std::vector<T> inputVector) {
    for (int i = 0; i < inputVector.size(); ++i) {
        std::cout << inputVector.at(i) << " ";
    }
}

int main() {
    std::vector<int> inputVectorInt;

    inputVectorInt = vectorInput(5);
    vectorPrint(inputVectorInt);

    std::vector<std::string> inputVectorString;
    inputVectorString = vectorIntegerToString(inputVectorInt); //

    std::string vectorSeparated;
    vectorSeparated = join(inputVectorString, '_');

    std::cout << vectorSeparated << '\n'; // Вывод строки с разделителем #: 1_2_3

    vectorPrint(inputVectorInt); // Вывод работает для vector<int> inputVectorInt
    vectorPrint(inputVectorString); // Вывод работает для vector<std::string> inputVectorString

    return 0;
}