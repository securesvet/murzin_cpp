//
// Created by mursv on 4/18/2022.
//
#include<iostream>
#include<cmath>

int main() {
    double coefficientA, coefficientB, coefficientC;
    /*
     * Пользователь вводит коэффициенты перед x^2, x, 1 соответственно
     */
    std::cin >> coefficientA >> coefficientB >> coefficientC;
    /* Проверяем, квадратное ли уравнениe */
    if (coefficientA != 0) {
        /* Cчитаем дискриминант */
        double discriminant = (coefficientB * coefficientB - 4 * coefficientA * coefficientC);
        /*
         * Если дискриминант больше или равен нулю,
         * то вычисляем квадратный корень из неотрицательного числа
         */
        if (discriminant >= 0) {

            discriminant = sqrt(discriminant);
            /*
             * Вычисляем действительные корни
             */
            if (discriminant != 0) {
                double rootX1 = (-coefficientB + discriminant) / (2 * coefficientA);
                double rootX2 = (-coefficientB - discriminant) / (2 * coefficientA);
                std::cout << rootX1 << " " << rootX2;
            } else {
                double rootX1 = -coefficientB / (2 * coefficientA);
                std::cout << rootX1;
            }
        }
    }
        /*
         * Если уравнение не является квадратным, а линейным
         * то вычисляем действительный корень линейного уравнения
         */
    else {
        double rootX1 = -coefficientC / coefficientB;
        std::cout << rootX1;
    }
    return 0;
}