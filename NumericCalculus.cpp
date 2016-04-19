//
// Created by Eric Reis on 4/19/16.
//

#include "NumericCalculus.h"

/**
 * Default Constructor
 */
NumericCalculus::NumericCalculus()
{

}

/**
 * Default Destructor
 */
NumericCalculus::~NumericCalculus()
{

}

/**
 * Method to approximate the zero of a function
 * @param[in] a0, b0, e, f(x)
 * @return zero_func
 */
double NumericCalculus::bisection(double a0, double b0, double e, double (*f)(double))
{
    double a = a0;
    double b = b0;

    double x;

    NumericCalculus::k = 0;
    while(b - a > e)
    {
        x = (a + b) / 2;

        if((*f)(a) * (*f)(x) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
        NumericCalculus::k++;
    }

    return (a + b) / 2;
}

/**
 * Method to approximate the zero of a function
 * @param[in] a0, b0, e, f(x)
 * @return zero_func
 */
double NumericCalculus::falsePosition(double a0, double b0, double e, double (*f)(double))
{
    double a = a0;
    double b = b0;

    double x;

    NumericCalculus::k = 0;
    while(b - a > e)
    {
        x =  b - ((*f)(b) * (b - a)) / ((*f)(b) - (*f)(a));

        if((*f)(a) * (*f)(x) < 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
        NumericCalculus::k++;
    }

    return (a + b) / 2;
}


