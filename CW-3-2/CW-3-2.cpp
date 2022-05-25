//
// Created by mursv on 5/6/2022.
//
#include <iostream>
#include <cstring>
#include <string>

int main() {

    int sizeOfArray = 20000; // размерность массива

    char input_string[sizeOfArray];

    std::cin >> input_string;

    std::string palindrom_string, minimum_palindrom, copy_input_string(input_string);

    minimum_palindrom = palindrom_string = copy_input_string;


    for (int i = 0; i < strlen(input_string) - 1; ++i) {

        if (input_string[i] == input_string[i + 1]) {

            palindrom_string = copy_input_string.substr(i, 2);

        } else {

            if (input_string[i] == input_string[i + 2]) {

                palindrom_string = copy_input_string.substr(i, 3);

            }
        }

        if (palindrom_string.compare(minimum_palindrom) < 0) { // если palindrom_string меньше minimum_palindrom
            minimum_palindrom = palindrom_string;
        }
    }

    std::cout << minimum_palindrom;

    return 0;
}