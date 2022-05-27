//
// Created by mursv on 5/26/2022.
// Insert Sort
//
#include <iostream>

int main() {
    int size_of_array = 10;
    int array_to_sort[size_of_array];

    // Ввод массива
    for (int i = 0; i < size_of_array; ++i) {
        std::cin >> array_to_sort[i];
    }

    int temp; // Переменная для обмена

    // Сортировка Вставками
    for (int i = 1; i < size_of_array; ++i) {
        for (int j = i; j > 0 && array_to_sort[j] < array_to_sort[j-1]; --j) {
                temp = array_to_sort[j-1];
                array_to_sort[j-1] = array_to_sort[j];
                array_to_sort[j] = temp;
        }
    }

    // Вывод отсортированного массива
    for (int i = 0; i < size_of_array; ++i) {
        std::cout << array_to_sort[i] << " ";
    }

    return 0;
}