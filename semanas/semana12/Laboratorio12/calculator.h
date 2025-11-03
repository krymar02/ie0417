// calculator.h
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdexcept>

class Calculator {
public:
    int add(int a, int b) const {
        return a + b;
    }

    int subtract(int a, int b) const {
        return a - b;
    }

    int multiply(int a, int b) const {
        return a * b;
    }

    double divide(double a, double b) const {
        if (b == 0.0) {
            throw std::invalid_argument("division by zero");
        }
        return a / b;
    }
};

#endif // CALCULATOR_H
