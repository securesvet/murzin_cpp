//
// Created by mursv on 4/21/2022.
//
#include<iostream>
#include<cmath>

int main() {

    using namespace std;

    double N, A, B, X, Y;

    double price;

    // N - исходная стоимость товара, A - если стоимость больше A, то скидка в X процентов,
    // B - если стоимость больше B, то скидка в Y процентов

    cin >> N >> A >> B >> X >> Y;

    //Если цена больше A, но меньше B, то скидка X

    if ( ( N > A ) and (N < B)  ) {
        price = N * (1 - X / 100);
    }

    //Если цена больше B, то скидка Y

    else if ( ( N > B)) {
        price = N * (1 - Y/100);
    }

    //Если цена меньше А
    else {
        price = N;
    }

    cout << price;

    return 0;
}