//
// Created by mursv on 4/21/2022.
//
#include<iostream>
#include<cmath>


double Fibo(int indexNumber) {

    //PHI - золотое сечение

    double PHI = (1 + sqrt(5)) / 2;

    //Сама формула Бине:

    return (pow(PHI, indexNumber) - (pow(-PHI, -indexNumber))) / (2 * PHI - 1);
}

int main() {

    // Задача: вывести indexNumber-ое число Фибоначчи
    // Предлагаю воспользоваться формулой Бине, которая выражает в явном виде
    // значение Fn как функцию от n

    int indexNumber;

    std::cin >> indexNumber;

    std::cout << Fibo(indexNumber);

    return 0;

}