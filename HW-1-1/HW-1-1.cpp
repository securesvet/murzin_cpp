//
// Created by mursv on 4/18/2022.
//
#include<iostream>
#include<cmath>

int main() {
    double quadraticCoefficient, linearCoefficient, freeTermCoefficient;
    // Пользователь вводит коэффициенты перед x^2, x^1, x^0 соответственно
    std::cin >> quadraticCoefficient >> linearCoefficient >> freeTermCoefficient;
    // Проверяем, квадратное ли уравнениe
    if (quadraticCoefficient != 0) {
        // Cчитаем дискриминант
        double discriminant = (linearCoefficient * linearCoefficient - 4 * quadraticCoefficient * freeTermCoefficient);
        // Если дискриминант больше или равен нулю,
        // то вычисляем квадратный корень из неотрицательного числа
        if (discriminant >= 0) {

            discriminant = sqrt(discriminant);
            /*
             * Вычисляем действительные корни
             */
            if (discriminant != 0) {
                double firstRoot = (-linearCoefficient + discriminant) / (2 * quadraticCoefficient);
                double secondRoot = (-linearCoefficient - discriminant) / (2 * quadraticCoefficient);
                std::cout << firstRoot << " " << secondRoot;
            } else {
                double root = -linearCoefficient / (2 * quadraticCoefficient);
                std::cout << root;
            }
        }
    }
    // Если уравнение является не квадратным, а линейным,
    // то вычисляем действительный корень линейного уравнения
    else {
        double root = -freeTermCoefficient / linearCoefficient;
        std::cout << root;
    }
    return 0;
}