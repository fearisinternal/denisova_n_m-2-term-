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

    std::ostream& writeTo(std::ostream& ostrm) const 
    {
        ostrm << leftBrace << re << separator << im << rightBrace;
        return ostrm;
    };
    std::istream& readFrom(std::istream& istrm) const 
    {
        char leftBrace(0);
        double real(0.0);
        char comma(0);
        double imaganary(0.0);
        char rightBrace(0);
        istrm >> leftBrace >> real >> comma >> imaganary >> rightBrace;
        if (istrm.good()) {
            if ((Complex::leftBrace == leftBrace) && (Complex::separator == comma) && (Complex::rightBrace == rightBrace)) {
                re = real;
                im = imaganary;
            }
        }
    };
};

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs)
{
    return rhs.writeTo(ostrm);
}

inline std::istream& operator>>(std::istream& istrm, Complex& rhs)
{
    return rhs.readFrom(istrm);
}

#endif