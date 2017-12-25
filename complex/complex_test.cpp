#include "complex.h"
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

bool testParse(const std::string& str)
{
    using namespace std;
    istringstream istrm(str);
    Complex z;
    istrm >> z;
    if (istrm.good()) {
        cout << "Read success:" << str << " -> " << z << endl;
    } else {
        cout << "Read error: " << str << " -> " << z << endl;
    }
    return istrm.good();
}

void TestParse1(){

    cout << "Test Parse: " << endl;

    testParse("{8.9,9}");
    testParse("{8.9, 9}");
    testParse("{8.9,9");
}

int main()
{
    Complex a;
    a += Complex(3.0);
    a += Complex(8.0, 1.0);
    a -= Complex(3.0, 0.2);
    Complex b(1.2, 3.4);
    a *= b;
    b /= a;
    TestParse1();

    return 0;
}
