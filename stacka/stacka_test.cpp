#include "stacka.h"
#include "array.h"
#include <cstddef>
#include <iostream>
#include <sstream>

using namespace std;


int main()
{
	StackA test;
	for (int i = 0; i < 10; i++)
	{
		test.push(10 - i);
	}

	StackA test2;
	for (int i = 0; i < 5; i++)
	{
		test2.push(11 + i);
	}

	StackA test3;

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
	cout << endl;
	while (!test3.isEmpty())
	{
		cout << test3.top() << " ";
		test3.pop();
	}
	cout << endl;
	return 0;
}
