//
// Created by mursv on 5/3/2022.
// Задача на второе вхождение
//

#include <iostream>

int main() {

    std::string inputString;
    int indexOfFirstSymbol, indexOfSecondSymbol;

    std::cin >> inputString;

    indexOfFirstSymbol = inputString.find_first_of('f', 0);

    if (indexOfFirstSymbol == -1) {
        indexOfSecondSymbol = -2;
    } else {
        indexOfSecondSymbol = inputString.find_first_of('f', indexOfFirstSymbol + 1);
    }

    std::cout << indexOfSecondSymbol;

    return 0;
}