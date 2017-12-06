#include "PriorityQueueL.h"
#include <cstddef>
#include <iostream>
#include <sstream>

using namespace std;


int main()
{
    PriorityQueueL test;
    for (int i = 0; i < 10; i++)
    {
        test.insert(i);
    }

    PriorityQueueL test2;
    test2 = test;

    for (int i = 0; i < 5; i++)
    {
        test2.pop();
    }

    for (int i = 0; i < 4; i++)
    {
        test2.insert(i-3);
    }
    test2.insert(15);

    PriorityQueueL test3;

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