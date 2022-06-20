//
// Created by mursv on 4/21/2022.
//
#include<iostream>

int main() {

    double initialPrice, discountPriceFirst, discountPriceSecond, discountFirst, discountSecond, finalPrice;

    // initialPrice - исходная стоимость товара, discountPriceFirst - если стоимость больше discountPriceFirst, то скидка в discountFirst процентов,
    // discountPriceSecond - если стоимость больше discountPriceSecond, то скидка в discountSecond процентов
    std::cin >> initialPrice >> discountPriceFirst >> discountPriceSecond >> discountFirst >> discountSecond;

    //Если цена больше discountPriceFirst, но меньше discountPriceSecond, то скидка discountFirst
    if ((initialPrice > discountPriceFirst) && (initialPrice < discountPriceSecond)) {
        finalPrice = initialPrice * (1 - discountFirst / 100);
    }

    //Если цена больше discountPriceSecond, то скидка discountSecond
    else if ((initialPrice > discountPriceSecond)) {
        finalPrice = initialPrice * (1 - discountSecond / 100);
    }

    //Если цена меньше А
    else {
        finalPrice = initialPrice;
    }

    std::cout << finalPrice;

    return 0;
}