//
// Created by mursv on 4/22/2022.
//
#include<iostream>

int main() {

    using namespace std;

    // ввод 0 <= h <= 59; 0 <= m <= 59;

    int h, m;

    cin >> h >> m;

    //x, y - реальное значение текущего времени
    //x - h; y - m

    int x, y;

    x = abs(12 - h) % 12; //% - чтобы не достигало значения 12
    y = abs(60 - m) % 60; //% - чтобы не достигало значения 60, пример без %: 6 0, вывод: 6 60

    cout << x << " " << y;

    return 0;
}
