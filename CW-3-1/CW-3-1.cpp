//
// Created by mursv on 5/6/2022.
//
#include <iostream>
#include <cstring>

int main() {

    int a = 100;

    char input_string[a];
    bool input_string_is_palindrom = true; //ставим флаг

    std::cin >> input_string;

    // цикл в котором сравниваются последние буквы строки и первые
    // цикл проходит до половины слова
    for (int i = 0; i < strlen(input_string) / 2; ++i) {
        //если хотя бы одна буква не равна, то флаг = ложь и цикл обрывается
        if (input_string[strlen(input_string) - 1 - i] != input_string[i]) {
            input_string_is_palindrom = false;
            break;
        }
    }

    std::cout << input_string_is_palindrom; //вывод флага

    return 0;
}
