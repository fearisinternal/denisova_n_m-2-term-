#include "stackl.h"
#include <cstddef>
#include <iostream>
#include <sstream>

using namespace std;


int main()
{   
    StackL test;
    for (int i = 0; i < 10; i++)
    {
        test.push(10-i);
    }

    StackL test2;
    test2 = test;

    for (int i = 0; i < 5; i++)
    {
        test2.pop();
    }
    
    for (int i = 0; i < 5; i++)
    {
        test2.push(11 + i);
    }

    StackL test3;

    while (!test.isEmpty())
    {
        cout << test.top() << " ";
        test.pop();
    }
    cout << endl;

    while (!test2.isEmpty())
    {
        cout << test2.top() << " ";
        test2.pop();
    }

    while (!test3.isEmpty())
    {
        cout << test3.top() << " ";
        test3.pop();
    }

    return 0;
}
