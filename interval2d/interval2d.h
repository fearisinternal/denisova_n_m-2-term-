#ifndef INTERVAL2D
#define INTERVAL2D

struct Interval2d {
    double a{ 0.0 }; // if (a==-100 && b=-100) Interval2d - empty;
    double b{ 0.0 }; // if (a==100 && b==100) Interval2d содержит два интервала

    Interval2d() = default;
    ~Interval2d() = default;
    Interval2d(double x, double y) {
        if (x <= y) {
            a = x;
            b = y;
        }
        else {
            a = y;
            b = x;
        }
    }

    bool empty() {
        return (a == -100 && b == -100);
    }

    bool operator==(Interval2d& int1) {
        return (a == int1.a) && (b == int1.b);
    }
    bool operator!=(Interval2d& int1) {
        return (a != int1.a) || (b != int1.b);
    }

    bool operator<(Interval2d& int1) {
        if (empty()) return true;
        if (int1.empty()) return false;
        return (b - a < int1.b - int1.a);
    }

    bool operator>(Interval2d& int1) {
        if (empty()) return false;
        if (int1.empty()) return true;
        return (b - a > int1.b - int1.a);
    }

    Interval2d& operator+(Interval2d& int1);
    Interval2d& operator-(Interval2d& int1);
    Interval2d& operator+=(Interval2d& int1);
    Interval2d& operator-=(Interval2d& int1);
};

#endif