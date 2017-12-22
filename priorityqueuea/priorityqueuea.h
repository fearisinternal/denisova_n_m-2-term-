#ifndef PRIORITEQUEUEA
#define PRIORITEQUEUEA
#include "array.h"
#include <cstddef>

class PriorityQueueA {
public:
	PriorityQueueA() = default;
	~PriorityQueueA();

	void pop();
	int& top();
	const int& top() const;
	bool isEmpty() const;
	void refresh(Array a, int head);
	void insert(const int& a);
	void insert(const PriorityQueueA& a);

private:
	Array arr;
	int head{ 0 };
	int tail{ 0 };
};

#endif
