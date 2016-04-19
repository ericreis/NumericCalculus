//
// Created by Eric Reis on 4/19/16.
//

#ifndef CALCULONUMERICO_CALCULONUMERICO_H
#define CALCULONUMERICO_CALCULONUMERICO_H

#define MAX(a,b) ((a > b) ? a : b)
#define MIN(a,b) ((a < b) ? a : b)


class NumericCalculus
{
public:
    int k;

    NumericCalculus();
    ~NumericCalculus();

    double bisection(double a0, double b0, double e, double (*f)(double));
    double falsePosition(double a0, double b0, double e, double (*f)(double));
};


#endif //CALCULONUMERICO_CALCULONUMERICO_H
