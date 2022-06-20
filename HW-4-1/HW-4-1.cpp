//
// Created by mursv on 5/26/2022.
//
#include <iostream>

int main() {
    int sizeOfArray = 10;
    int arrayToSort[sizeOfArray];

    for (int i = 0; i < sizeOfArray; ++i) {
        std::cin >> arrayToSort[i];
    }

    int tempSwap; // Переменная для обмена

    // Сортировка пузырьком
    for (int i = 0; i < sizeOfArray - 1; ++i) {
        for (int j = 0; j < sizeOfArray - i - 1; ++j) {
            if (arrayToSort[j] > arrayToSort[j + 1]) {
                tempSwap = arrayToSort[j];
                arrayToSort[j] = arrayToSort[j + 1];
                arrayToSort[j + 1] = tempSwap;
            }
        }
    }

    // Вывод отсортированного массива
    for (int i = 0; i < sizeOfArray; ++i) {
        std::cout << arrayToSort[i] << " ";
    }

    return 0;
}