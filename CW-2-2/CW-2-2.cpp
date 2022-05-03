//
// Created by mursv on 5/3/2022.
// Задача на второе вхождение
//

#include <iostream>

int main() {

    std::string input_string;
    int index_of_first_symbol, index_of_second_symbol;

    std::cin >> input_string;

    index_of_first_symbol = input_string.find_first_of('f', 0);

    if (index_of_first_symbol == -1) {
        index_of_second_symbol = -2;
    } else {
        index_of_second_symbol = input_string.find_first_of('f', index_of_first_symbol + 1);
    }

    std::cout << index_of_second_symbol;

    return 0;

}