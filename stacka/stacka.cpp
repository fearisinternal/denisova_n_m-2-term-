#include "stacka.h"
#include "array.h"

StackA::StackA(const StackA & obj)
{
}

StackA::~StackA()
{
	while (isEmpty()) {
		pop();
	}
}

void StackA::push(const int & element)
{
	a.insert(element, a.size());
}

void StackA::pop()
{
	if (!isEmpty()) {
		a.remove(a.size() - 1);
	}
}

int& StackA::top()
{
	return a[a.size() - 1];
}

const int & StackA::top() const
{
	return a[a.size()- 1];
}

bool StackA::isEmpty() const
{
	return (a.size()==0);
}

StackA& StackA::operator=(const StackA& a)
{
	while (!isEmpty())
	{
		pop();
	}
	if (!a.isEmpty())
	{
		
	}
	return *this;
}
