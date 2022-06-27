//
// Created by mursv on 6/26/2022.
//

#ifndef MURZIN_CPP_FRACTION_H
#define MURZIN_CPP_FRACTION_H

#include <cstring>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction();

    Fraction(int, int);

    Fraction sumOfFractions(Fraction);

    Fraction differenceOfFractions(Fraction);

    Fraction multiplicationOfFractions(Fraction);

    Fraction divisionOfFractions(Fraction);

    int getNumerator();

    int getDenominator();
};


#endif //MURZIN_CPP_FRACTION_H
