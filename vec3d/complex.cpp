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