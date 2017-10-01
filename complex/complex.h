#ifndef COMPLEX_H
#define COMPLEX_H
#include <iosfwd>
#include <iostream>
struct Complex
{

    double re{ 0.0 };
    double im{ 0.0 };

    static const char leftBrace{ '{' };
    static const char separator{ ',' };
    static const char rightBrace{ '}' };

    Complex() {}
    explicit Complex(const double real);
    Complex(const double real, const double imaginary);

    bool operator==(const Complex& rhs);
    bool operator!=(const Complex& rhs);

    Complex& operator+=(const Complex& rhs);
    Complex& operator-=(const Complex& rhs);
    Complex& operator*=(const Complex& rhs);
    Complex& operator/=(const Complex& rhs);
};
#endif