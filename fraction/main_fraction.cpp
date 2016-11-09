#include <iostream>
#include "fraction.h"

using namespace std;

int
main (int argc, char* argv[])
{
    Fraction fraction = Fraction(1, 2);

    std::cout << "numerator: " << fraction.GetNumerator() << "\n";
    std::cout << "denominator: " << fraction.GetDenominator() << "\n";

    return 0;
}
