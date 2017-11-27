#include <iostream>
#include "interval2d.h"

double max(double x, double y) {
    if (x >= y) return x;
    return y;
}

double min(double x, double y) {
    if (x <= y) return x;
    return y;
}

Interval2d& Interval2d::operator+(Interval2d& int1) {
    if (empty()) return int1;
    if (int1.empty()) return *this;
    a = min(a, int1.a);
    b = max(b, int1.b);
    return *this;
}

Interval2d& Interval2d::operator-(Interval2d& int1) {
    if ((empty()) || (int1.empty())) return *this;
    if ((int1.a < a) && (int1.b>b)) {
        a = -100;
        b = -100;
        return *this;
    }
    if (int1.a >= a) {
        a = int1.b;
        return *this;
    }
    if (int1.b <= b) {
        b = int1.a;
        return *this;
    }
    a = 100;
    b = 100;
    return *this;
}

Interval2d& Interval2d::operator+=(Interval2d& int1) {
    return operator+(int1);
}

Interval2d& Interval2d::operator-=(Interval2d& int1) {
    return operator-(int1);
}


int main() {

    Interval2d a(1.3, 2);
    Interval2d b(4, -1.5);
    bool check = a == b;
    check = a != b;
    check = a > b;
    check = a < b;
    Interval2d c(4.4, 1);
    c -= a;
    c -= b;
    a -= c;
    b += c;
    c -= b; // ответ - пустой интервал
    a -= b; // ответ - два интервала

    return 0;
}