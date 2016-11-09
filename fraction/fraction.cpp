#include "fraction.h"

Fraction::Fraction (int numerator, int denominator) :
    m_numerator(numerator), m_denominator(denominator)
{
    reduce();
}

void Fraction::reduce()
{
    this->m_numerator = 1;
    this->m_denominator = 1;
}

int Fraction::GetNumerator ()
{
    return this->m_numerator;
}

int Fraction::GetDenominator ()
{
    return this->m_denominator;
}
