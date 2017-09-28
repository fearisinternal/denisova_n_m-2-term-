#include <iostream>
#include "rational.h"

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a*b / gcd(a, b);
}

//== и !=

bool Rational::operator==(const Rational& rhs) const { return (ch == rhs.ch) && (dr == rhs.dr); }
bool Rational::operator!=(const Rational& rhs) const { return !operator==(rhs); }

//операторы межды двумя рациональными

Rational& Rational::operator*=(const Rational rhs) const {
    return Rational((ch * rhs.ch), (dr * rhs.dr));
}

Rational& Rational::operator+=(const Rational rhs) const {
    int del = lcm(dr, rhs.dr);
    return Rational(ch*(del / dr) + rhs.ch*(del / rhs.dr), del);
}

Rational& Rational::operator-=(const Rational& rhs) const {
    int del = lcm(dr, rhs.dr);
    return Rational(ch*(del / dr) - rhs.ch*(del / rhs.dr), del);
}

//операторы с числами

Rational& Rational::operator+=(const int rhs) const {
    return Rational(ch + rhs*dr, dr);
}

Rational& Rational::operator-=(const int rhs) const {
    return Rational(ch - rhs*dr, dr);
}

Rational& Rational::operator*=(const int rhs) const {
    return Rational(ch * rhs, dr);
}
