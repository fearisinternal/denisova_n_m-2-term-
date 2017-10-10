#include "rational.h"
#include <sstream>
#include <iostream>

bool testParse(const std::string& str)
{
    using namespace std;
}
int main()
{
    using namespace std;

    Rational a;
    a += Rational(4,6);
    testParse("2/3");
    testParse("10/4");
    testParse("3.3/4");


    return 0;
}
