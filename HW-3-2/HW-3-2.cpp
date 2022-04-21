//
// Created by mursv on 4/21/2022.
//
#include<iostream>
#include<cmath>

using namespace std;



double Fibo(int N) {

    //PHI - золотое сечение

    double PHI = (1+sqrt(5))/2;
    double value;

    //Сама формула Бине:

    value = ( pow ( PHI, N )  - ( pow( - PHI, -N ) ) ) / ( 2 * PHI - 1);
    return value;
}

int main() {

    using namespace std;

    // Задача: вывести N-ое число Фибоначчи
    // Предлагаю воспользоваться формулой Бине, которая выражает в явном виде
    // значение Fn как функцию от n

    int N;

    cin >> N;

    cout << Fibo(N);

    return 0;

}