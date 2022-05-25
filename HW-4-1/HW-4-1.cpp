//
// Created by mursv on 5/26/2022.
//
#include <iostream>

int main() {
    int size_of_array = 10;
    int array_to_sort[size_of_array];

    for (int i = 0; i < size_of_array; ++i) {
        std::cin >> array_to_sort[i];
    }

    int temp; // Переменная для обмена

    // Сортировка пузырьком
    for (int i = 0; i < size_of_array - 1; ++i) {
        for (int j = 0; j < size_of_array - i - 1; ++j) {
            if (array_to_sort[j] > array_to_sort[j+1]) {
                temp = array_to_sort[j];
                array_to_sort[j] = array_to_sort[j+1];
                array_to_sort[j+1] = temp;
            }
        }
    }

    // Вывод отсортированного массива
    for (int i = 0; i < size_of_array; ++i) {
        std::cout << array_to_sort[i] << " ";
    }

    return 0;
}