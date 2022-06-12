//
// Created by mursv on 5/6/2022.
//
#include <iostream>
#include <string>

int main() {

    std::string inputString;

    std::cin >> inputString;

    std::string palindromString = inputString;

    std::string palindromMinimum = inputString;

    for (int i = 0; i < inputString.length() - 2; ++i) {

        if (inputString[i] == inputString[i + 1]) {

            palindromString = inputString.substr(i, 2);

        } else {

            if (inputString[i] == inputString[i + 2]) {

                palindromString = inputString.substr(i, 3);

            }
        }

        if (palindromString < palindromMinimum) { // если palindromString меньше palindromMinimum
            palindromMinimum = palindromString;
        }
    }

    // Чтобы не было out of range при проверке равенства знаков
    // Вручную проверяем последние два знака
    if (inputString[inputString.length() - 2] == inputString[inputString.length() - 1] &&
        inputString.substr(inputString.length() - 2, 2) < palindromMinimum) {
        palindromMinimum = inputString.substr(inputString.length() - 2, 2);
    }

    std::cout << palindromMinimum;

    return 0;
}