#include "Fraction.h"
#include <iostream>

int main() {
    Fraction firstFraction(10, 200);
    Fraction secondFraction(20, 126);
    Fraction thirdFraction;
    thirdFraction = firstFraction.sumOfFractions(secondFraction);
    std::cout << thirdFraction.getNumerator() << '/' << thirdFraction.getDenominator() << '\n';
    thirdFraction = firstFraction.differenceOfFractions(secondFraction);
    std::cout << thirdFraction.getNumerator() << '/' << thirdFraction.getDenominator() << '\n';
    thirdFraction = firstFraction.multiplicationOfFractions(secondFraction);
    std::cout << thirdFraction.getNumerator() << '/' << thirdFraction.getDenominator() << '\n';
    thirdFraction = firstFraction.divisionOfFractions(secondFraction);
    std::cout << thirdFraction.getNumerator() << '/' << thirdFraction.getDenominator() << '\n';
    return 0;
}