//
// Created by mursv on 6/26/2022.
//

#include <stdexcept>
#include "Fraction.h"

Fraction::Fraction() {
}

Fraction::Fraction(int _numerator, int _denominator) {
    // Создаём временные переменные для хранения значений числителя и знаменателя.
    // Если знаменатель не равен нулю
    if (_denominator != 0) {
        int tempNumerator = _numerator;
        int tempDenominator = _denominator;
        // Находим наибольшие общие делители
        // Из цикла исключаем единицу, так как на 1 всё делится
        for (int i = _numerator; i > 1; --i) {
            if (_numerator % i == 0 && _denominator % i == 0) {
                // Сокращаем числитель и знаменатель на одно и то же число
                tempNumerator = tempNumerator / i;
                tempDenominator = tempDenominator / i;
            }
            // В случае, если или числитель, или знаменатель = 1, то сокращение прекращается
            if (tempNumerator == 1 || tempDenominator == 1) {
                break;
            }
        }
        numerator = tempNumerator;
        denominator = tempDenominator;
    }
        // Если знаменатель равен нулю
    else {
        throw std::runtime_error("You cannot create a fraction with a denominator that is equal to 0!");
    }
}

// Функция суммы дробей
Fraction Fraction::sumOfFractions(Fraction _fraction) {
    // _fraction - это дробь, которая подаётся в интерфейсе функции на вход
    // Возвращаем дробь, которая получилась при сложении, если знаменатели не равны
    if (denominator != _fraction.denominator) {
        return Fraction(numerator * _fraction.denominator + denominator * _fraction.numerator,
                        denominator * _fraction.denominator);
    }
        // В случае, если же знаменатели равны, то выражение получается более простым
    else {
        return Fraction(numerator + _fraction.numerator, denominator);
    }
    // Замечание: числитель и знаменатель сокращаются (если это возможно) в вызове Fraction(numerator, denominator)
}

// Функция разности дробей
Fraction Fraction::differenceOfFractions(Fraction _fraction) {
    // _fraction - это дробь, которая подаётся в интерфейсе функции на вход
    // Возвращаем дробь, которая получилась при сложении, если знаменатели не равны
    if (denominator != _fraction.denominator) {
        return Fraction(numerator * _fraction.denominator - denominator * _fraction.numerator,
                        denominator * _fraction.denominator);
    }
        // В случае, если же знаменатели равны, то выражение получается более простым
    else {
        return Fraction(numerator - _fraction.numerator, denominator);
    }
    // Замечание: числитель и знаменатель сокращаются (если это возможно) в вызове Fraction(numerator, denominator)
}


// Функция умножения дробей
Fraction Fraction::multiplicationOfFractions(Fraction _fraction) {
    // _fraction - это дробь, которая подаётся в интерфейсе функции на вход
    // Если знаменатель не равен нулю (умножение дробей)
    if (_fraction.denominator != 0) {
        return Fraction(numerator * _fraction.numerator,
                        denominator * _fraction.denominator);
    } else {
        throw std::runtime_error("Denominator equals 0!");
    }
}

// Функция деления дробей (очень похожа с функцией умножения, потому что мы просто переворачиваем вторую дробь, на которую делим)
Fraction Fraction::divisionOfFractions(Fraction _fraction) {
    // _fraction - это дробь, которая подаётся в интерфейсе функции на вход
    // Если числитель не равен нулю (так как это деление дробей)
    if (_fraction.numerator != 0) {
        return Fraction(numerator * _fraction.denominator,
                        denominator * _fraction.numerator);
    } else {
        throw std::runtime_error("Denominator equals 0!");
    }
}

//Функция возвращает числитель
int Fraction::getNumerator() {
    return numerator;
}

//Функция возвращает знаменатель
int Fraction::getDenominator() {
    return denominator;
}