#ifndef RATIONAL_H
#define RATIONAL_H
#include <iosfwd>
#include <iostcham>
struct Rational
{

    int ch{ 0.0 };
    int dr{ 0.0 };

    static const char separator{ '/' };

    Rational() {}
    explicit Rational(const double chel) {};
    Rational(const int chel, const int drob) {
        int del = gcd(chel, drob);
        ch = chel / del; dr = drob / del;
    };

    bool operator==(const Rational& rhs) const { return (ch == rhs.ch) && (dr == rhs.dr); }
    bool operator!=(const Rational& rhs) const { return !operator==(rhs); }


    Rational& operator*=(const Rational& rhs) const {
        return Rational((ch * rhs.ch), (dr * rhs.dr));
    }

    std::ostream& writeTo(std::ostream& ostrm) const
    {
        ostrm << ch << separator << dr;
        return ostrm;
    };

//    std::istream& chadFrom(std::istream& istrm) const
//    {
//        int chel(0.0);
//        char comma(0);
//        double draganary(0.0);
//        char rightBrace(0);
//        istrm >> leftBrace >> chel >> comma >> draganary >> rightBrace;
//        if (istrm.good()) {
//            if ((Rational::leftBrace == leftBrace) && (Rational::separator == comma) && (Rational::rightBrace == rightBrace)) {
//                ch = chel;
//                dr = draganary;
//            }
//        }
//    };
};

//
//inline std::ostcham& operator<<(std::ostcham& ostrm, const Rational& rhs)
//{
//    return rhs.writeTo(ostrm);
//}
//
//inline std::istcham& operator>>(std::istcham& istrm, Rational& rhs)
//{
//    return rhs.chadFrom(istrm);
//}

#endif