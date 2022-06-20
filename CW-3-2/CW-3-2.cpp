//
// Created by mursv on 5/6/2022.
//
#include <iostream>
#include <string>

int main() {
    std::string inputString;
    std::cin >> inputString;
    std::string palindromeString = inputString;
    std::string palindromeMinimum = inputString;

    for (int i = 0; i < inputString.length() - 2; ++i) {
        if (inputString[i] == inputString[i + 1]) {
            palindromeString = inputString.substr(i, 2);
        } else {
            if (inputString[i] == inputString[i + 2]) {
                palindromeString = inputString.substr(i, 3);
            }
        }
        if (palindromeString < palindromeMinimum) { // если palindromeString меньше palindromeMinimum
            palindromeMinimum = palindromeString;
        }
    }
    // Чтобы не было out of range при проверке равенства знаков
    // Вручную проверяем последние два знака
    if (inputString[inputString.length() - 2] == inputString[inputString.length() - 1] &&
        inputString.substr(inputString.length() - 2, 2) < palindromeMinimum) {
        palindromeMinimum = inputString.substr(inputString.length() - 2, 2);
    }
    std::cout << palindromeMinimum;

    return 0;
}