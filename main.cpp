#include <iostream>
#include "utils/MathFunctions.hpp"

int main(int argc, char *argv[])
{
    double result = power(2, 3);
    std::cout << 2 << " ^ " << 3 << " is " << result << std::endl;
    return 0;
}
