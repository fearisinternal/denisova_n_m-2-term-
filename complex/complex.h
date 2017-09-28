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
    explicit Complex(const double real) {};
    Complex(const double real, const double imaginary) {};

    bool operator==(const Complex& rhs) const { return (re == rhs.re) && (im == rhs.im); }
    bool operator!=(const Complex& rhs) const { return !operator==(rhs); }

    Complex& operator+=(const Complex& rhs) const {
        return Complex((re + rhs.re), (im + rhs.im));
    }
    Complex& operator-=(const Complex& rhs) const {
        return Complex((re - rhs.re), (im - rhs.im));
    }
    Complex& operator*=(const Complex& rhs) const {
        return Complex((re * rhs.re), (im * rhs.im));
    }

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs)
{
    return rhs.writeTo(ostrm);
}

inline std::istream& operator>>(std::istream& istrm, Complex& rhs)
{
    return rhs.readFrom(istrm);
}

#endif