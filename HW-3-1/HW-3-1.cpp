//
// Created by mursv on 4/22/2022.
//
#include<iostream>

int main() {

    // ввод 0 <= hours <= 59; 0 <= minutes <= 59;

    int hours, minutes;

    std::cin >> hours >> minutes;

    //hoursReversed, minutesReversed - реальное значение текущего времени
    //hoursReversed - hours; minutesReversed - minutes

    int hoursReversed = abs(12 - hours) % 12; //% - чтобы не достигало значения 12
    int minutesReversed = abs(60 - minutes) % 60; //% - чтобы не достигало значения 60, пример без %: 6 0, вывод: 6 60

    std::cout << hoursReversed << " " << minutesReversed;

    return 0;
}
