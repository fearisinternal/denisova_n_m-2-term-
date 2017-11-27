#include "complex.h"
#include <sstream>
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    Complex a;
    a += Complex(3.0);
    a += Complex(8.0, 1.0);
    a -= Complex(3.0, 0.2);
    Complex b(1.2, 3.4);
    a *= b;
    b /= a;

    return 0;
}
