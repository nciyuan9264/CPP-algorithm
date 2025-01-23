#include <iostream>
#include "utils/MathFunctions.hpp"
#include "utils/StringFunctions.hpp"  // Include the new string functions

int main()
{
    // 使用 power 函数
    double base = 2.0;
    int exponent = 3;
    std::cout << base << " raised to the power " << exponent << " is " << power(base, exponent) << std::endl;

    // 使用新的 toUpperCase 函数
    std::string text = "hello, world!";
    std::cout << "Original: " << text << std::endl;
    std::cout << "Uppercase: " << toUpperCase(text) << std::endl;

    return 0;
}
