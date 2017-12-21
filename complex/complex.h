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
    ~Complex() = default;
    Complex& operator=(const Complex& rhs) = default;
    explicit Complex(const double real)
        : re(real)
    {};
    Complex(const double real, const double imaginary)
        : re(real)
        , im(imaginary)
    {};

    bool operator==(const Complex& rhs);
    bool operator!=(const Complex& rhs);

    Complex& operator+=(const Complex& rhs);
    Complex& operator-=(const Complex& rhs);
    Complex& operator*=(const Complex& rhs);
    Complex& operator/=(const Complex& rhs);

    std::ostream& writeTo(std::ostream& ostrm) const;
    std::istream& readFrom(std::istream& istrm);
};

inline std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs) {
    return rhs.writeTo(ostrm);
}

inline std::istream& operator >> (std::istream& istrm, Complex& rhs) {
    return rhs.readFrom(istrm);
}
#endif
