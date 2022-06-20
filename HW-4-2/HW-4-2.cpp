//
// Created by mursv on 5/26/2022.
// Insert Sort
//
#include <iostream>

int main() {
    int sizeOfArray = 10;
    int arrayToSort[sizeOfArray];

    // Ввод массива
    for (int i = 0; i < sizeOfArray; ++i) {
        std::cin >> arrayToSort[i];
    }

    int tempSwap; // Переменная для обмена

    // Сортировка Вставками
    for (int i = 1; i < sizeOfArray; ++i) {
        for (int j = i; j > 0 && arrayToSort[j] < arrayToSort[j - 1]; --j) {
            tempSwap = arrayToSort[j - 1];
            arrayToSort[j - 1] = arrayToSort[j];
            arrayToSort[j] = tempSwap;
        }
    }

    // Вывод отсортированного массива
    for (int i = 0; i < sizeOfArray; ++i) {
        std::cout << arrayToSort[i] << " ";
    }

    return 0;
}