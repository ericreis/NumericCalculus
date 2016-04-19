#include <iostream>
#include <cmath>

#include "NumericCalculus.h"

double f(double x)
{
    return pow(x, 3) - 9 * x + 3;
}

int main()
{
    std::cout << "Hello, Numeric Calculus!" << std::endl;

    NumericCalculus nc;

    std::cout << "Zero: " << nc.bisection(0, 1, 1e-3, f) << std::endl;
    std::cout << "Number of iterations: " << nc.k << std::endl;

    std::cout << "Zero: " << nc.falsePosition(0, 1, 1e-3, f) << std::endl;
    std::cout << "Number of iterations: " << nc.k << std::endl;

    return 0;
}