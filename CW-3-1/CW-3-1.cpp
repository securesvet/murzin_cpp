//
// Created by mursv on 5/6/2022.
//
#include <iostream>
#include <cstring>

int main() {

    int sizeOfString = 100;

    char inputString[sizeOfString];
    bool inputStringIsPalindrom = true; //ставим флаг

    std::cin >> inputString;

    // цикл в котором сравниваются последние буквы строки и первые
    // цикл проходит до половины слова
    for (int i = 0; i < strlen(inputString) / 2; ++i) {
        //если хотя бы одна буква не равна, то флаг = ложь и цикл обрывается
        if (inputString[strlen(inputString) - 1 - i] != inputString[i]) {
            inputStringIsPalindrom = false;
            break;
        }
    }

    std::cout << std::boolalpha; // выводим логические значения как "true" или "false"
    std::cout << inputStringIsPalindrom; //вывод флага

    return 0;
}
