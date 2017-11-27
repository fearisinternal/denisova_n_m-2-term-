#include <iostream>
#include <sstream>
#include "complex.h"

double eps = -1e-8;

bool Complex::operator==(const Complex& rhs) { return (re - rhs.re < eps) && (im - rhs.im < eps); }
bool Complex::operator!=(const Complex& rhs) { return !operator==(rhs); }

Complex& Complex::operator+=(const Complex& rhs) {
    re += rhs.re; im += rhs.im;
    return *this;
}
Complex& Complex::operator-=(const Complex& rhs) {
    re -= rhs.re; im -= rhs.im;
    return *this;
}
Complex& Complex::operator*=(const Complex& rhs) {
    re *= rhs.re; im *= rhs.im;
    return *this;
}
Complex& Complex::operator/=(const Complex& rhs) {
    re /= rhs.re; im /= rhs.im;
    return *this;
}

Complex operator+(Complex& lhs, const Complex& rhs) { return lhs += rhs; }
Complex operator-(Complex& lhs, const Complex& rhs) { return lhs -= rhs; }
Complex operator*(Complex& lhs, const Complex& rhs) { return lhs *= rhs; }
Complex operator/(Complex& lhs, const Complex& rhs) { return lhs /= rhs; }

std::ostream& Complex::writeTo(std::ostream& ostrm) const {
    ostrm << leftBrace << re << separator << im << rightBrace;
    return ostrm;
}

std::istream& Complex::readFrom(std::istream& istrm) {
    char leftBrace(0);
    double real(0.0);
    char comma(0);
    double imaginary(0.0);
    char rightBrace(0);
    istrm >> leftBrace >> real >> comma >> imaginary >> rightBrace;
    if (istrm.good()) {
        if ((Complex::leftBrace == leftBrace) && (Complex::separator == comma)
            && (Complex::rightBrace == rightBrace)) {
            re = real;
            im = imaginary;
        }
        else {
            istrm.setstate(std::ios_base::failbit);
        }
    }
    return istrm;
}