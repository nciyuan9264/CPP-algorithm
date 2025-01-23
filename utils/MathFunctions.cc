#include <iostream>
/**
 * power - Calculate the power of number.
 * @param base:	Base value.
 * @param exponent: Exponent value.
 *
 * @return base raised to the power exponent.
 */
double power(double base, int exponent)
{
    if (exponent == 0) {
        return 1.0;  // Any number to the power of 0 is 1.
    }

    double result = 1.0;
    for (int i = 0; i < std::abs(exponent); ++i) {
        result *= base;
    }

    // If the exponent is negative, return the reciprocal
    if (exponent < 0) {
        result = 1.0 / result;
    }

    return result;
}