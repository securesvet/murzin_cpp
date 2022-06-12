//
// Created by mursv on 4/21/2022.
//
#include<iostream>

int main() {

    double initialCost, discountCost1, discountCost2, discount1, discount2;

    double price;

    // initialCost - исходная стоимость товара, discountCost1 - если стоимость больше discountCost1, то скидка в discount1 процентов,
    // discountCost2 - если стоимость больше discountCost2, то скидка в discount2 процентов

    std::cin >> initialCost >> discountCost1 >> discountCost2 >> discount1 >> discount2;

    //Если цена больше discountCost1, но меньше discountCost2, то скидка discount1

    if ((initialCost > discountCost1) and (initialCost < discountCost2)) {
        price = initialCost * (1 - discount1 / 100);
    }

        //Если цена больше discountCost2, то скидка discount2

    else if ((initialCost > discountCost2)) {
        price = initialCost * (1 - discount2 / 100);
    }

        //Если цена меньше А
    else {
        price = initialCost;
    }

    std::cout << price;

    return 0;
}