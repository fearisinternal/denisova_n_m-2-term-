#include "priorityqueuea.h"
#include "array.h"

PriorityQueueA::~PriorityQueueA()
{
	while (isEmpty())
	{
		pop();
	}
}
void PriorityQueueA::pop()
{
	if (tail-head>0)
	{
		arr.remove(0);
		tail--;
	}
}

int& PriorityQueueA::top()
{
	if (isEmpty()) { throw(("")); }
	return arr[head];
}

const int& PriorityQueueA::top() const
{
	return arr[head];
}

bool PriorityQueueA::isEmpty() const
{
	return arr.size();
}

void PriorityQueueA::refresh(Array a, int head) {
	Array new_a;
	int i = 0;
	while (head + i < a.size()) {
		new_a[i] = arr[head + i];
		i++;
	}
	while (tail < head) {
		new_a[i + tail] = a[tail];
		tail++;
	}
	std::swap(new_a, a);
	head = 0; tail = arr.size() - 1;
}


void PriorityQueueA::insert(const int& i)
{
	arr.insert(i, tail);
	tail++;
}

//void PriorityQueueA::insert(const PriorityQueueA& a)

