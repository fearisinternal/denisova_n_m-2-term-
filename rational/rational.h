#ifndef RATIONAL_H
#define RATIONAL_H
#include <iosfwd>
#include <iostream>

int gcd(int a, int b);
int lcm(int a, int b);

struct Rational
{
    int ch{ 0 };
    int dr{ 0 };

    static const char separator{ '/' };

    Rational() {}
    //explicit Rational(const double chel) {};
    Rational(const int chel, const int drob) {
        int del = gcd(chel, drob);
        ch = chel / del; dr = drob / del;
    }

    bool operator==(const Rational& a) const;
    bool operator!=(const Rational& a) const;

    Rational& operator+=(const Rational a);
    Rational& operator-=(const Rational a);
    Rational& operator*=(const Rational a);
    Rational& operator/=(const Rational a);

    Rational& operator+=(const int num);
    Rational& operator-=(const int num);
    Rational& operator*=(const int num); 
    Rational& operator/=(const int num);

    std::ostream& writeTo(std::ostream& ostr) const;
    std::istream& readFrom(std::istream& istr);
};

#endif