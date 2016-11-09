
class Fraction
{
public:
    Fraction(int numerator, int denominator);

    int GetNumerator();
    int GetDenominator();
private:
    int m_numerator;
    int m_denominator;

    void reduce();
};
