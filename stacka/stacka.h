#ifndef STACKA
#define STACKA
#include "array.h"
#include <cstddef>

class StackA {
public:
	StackA() = default;
	StackA(const StackA& obj);
	~StackA();

	void push(const int& element);
	void pop();
	int& top();
	const int& top() const;
	bool isEmpty() const;
	void clear();
	StackA& operator= (const StackA& a);

private:
	Array a;
};

#endif
