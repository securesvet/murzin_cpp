//
// Created by mursv on 4/22/2022.
//
#include<iostream>

int main() {

    std::string input_string_first, input_string_second, input_string_third;
    std::string *input_string_min;

    std::cin >> input_string_first >> input_string_second >> input_string_third;

    input_string_min = &input_string_first;

    if (input_string_first < input_string_second && input_string_first < input_string_third) {
        input_string_min = &input_string_first; // указатель получает адрес лексикографически наименьшей строки
    }
    else if (input_string_second < input_string_first && input_string_second < input_string_third) {
        input_string_min = &input_string_second;
    }
    else {
        input_string_min = &input_string_third;
    }

    std::cout << *input_string_min; // prints the value

    return 0;

}