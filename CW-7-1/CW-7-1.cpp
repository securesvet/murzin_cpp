//
// Created by mursv on 5/27/2022.
//
#include <iostream>
#include <vector>
#include <string>

std::vector<int> vectorInput(int sizeOfVector) {
    std::vector<int> vec;
    //vec.reserve(sizeOfVector);

    for (int i = 0; i < sizeOfVector; ++i) {
        int input_num;
        std::cin >> input_num;
        vec.push_back(input_num);
    }

    return vec;
} // Функция  для ввода vector<int>

std::vector<int> vectorStoi(std::vector<std::string> vec) {
    std::vector<int> vecInt;
    for (int i = 0; i < vec.size(); ++i) {
        vecInt.at(i) = std::stoi(vec.at(i));
    }
    return vecInt;
} // Функция для перевода vector<std::string> ---> vector<int>

std::vector<std::string> vectorItos(std::vector<int> inputVector) {
    std::vector<std::string> vectorString(inputVector.size());
    for (int i = 0; i < inputVector.size(); ++i) {
        vectorString.at(i) = std::to_string(inputVector.at(i));
    }
    return vectorString;
} // Функция для перевода vector<int> ---> vector<std::string>

std::string join(std::vector<std::string> inputVector, char separator) {
    std::string vectorSeparated;
    for (int i = 0; i < inputVector.size() - 1; ++i) {
        vectorSeparated += inputVector.at(i) + separator;
    }

    vectorSeparated += inputVector.at(inputVector.size()-1); // Чтобы не было вывода наподобие: 1_2_3_ Последний элемент я добавляю вручную
    return vectorSeparated;
} // Функция принимает вектор и разделитель, возвращает строку, где элементы стоят через разделитель

template<typename T> // Нужен, чтобы выводить vector<int> и vector<std::string> одной и той же функцией vectorPrint

void vectorPrint(std::vector<T> inputVector) {
    for (int i = 0; i < inputVector.size(); ++i) {
        std::cout << inputVector.at(i) << " ";
    }
} // Функция для вывода вектора

int main() {
    std::vector<int> inputVectorInt;

    inputVectorInt = vectorInput(5);
    vectorPrint(inputVectorInt);

    std::vector<std::string> inputVectorString;
    inputVectorString = vectorItos(inputVectorInt); //

    std::string vecSeparated;
    vecSeparated = join(inputVectorString, '_');

    std::cout << vecSeparated << '\n'; // Вывод строки с разделителем #: 1_2_3

    vectorPrint(inputVectorInt); // Вывод работает для vector<int> inputVectorInt
    vectorPrint(inputVectorString); // Вывод работает для vector<std::string> inputVectorString

    return 0;
}