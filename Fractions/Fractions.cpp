

#include <iostream>
#include "Fraction.h"

using namespace mathlib;

void DisplayFraction(const Fraction<int>& frac) {
    std::cout << "Fraction: " << frac << " (Decimal: " << frac.toDouble() << ")\n";
}

int main()
{
    std::cout << "Create your first fraction:\n";
    Fraction<int> fraction1;
    std::cout << "Enter numerator and denominator: ";
    std::cin >> fraction1;

    std::cout << "Create your second fraction:\n";
    Fraction<int> fraction2;
    std::cout << "Enter numerator and denominator: ";
    std::cin >> fraction2;

    std::cout << "\nHere are your fractions: \n";
    DisplayFraction(fraction1);
    DisplayFraction(fraction2);

    std::cout << "\nComparisons:\n";
    std::cout << fraction1 << " == " << fraction2 << "? " << (fraction1 == fraction2 ? "Yes" : "No") << "\n";
    std::cout << fraction1 << " > " << fraction2 << "? " << (fraction1 > fraction2 ? "Yes" : "No") << '\n';
    std::cout << fraction1 << " < " << fraction2 << "? " << (fraction1 < fraction2 ? "Yes" : "No") << '\n';

    std::cout << "\nArithmetic operations:\n";
    std::cout << "Addition: ";
    DisplayFraction(fraction1 + fraction2);
    std::cout << "Subtraction: ";
    DisplayFraction(fraction1 - fraction2);
    std::cout << "Multiplication: ";
    DisplayFraction(fraction1 * fraction2);
    std::cout << "Division: ";
    DisplayFraction(fraction1 / fraction2);

    return 0;

}
