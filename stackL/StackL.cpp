#include "stackL.h"

StackL::StackL(const StackL & obj)
{
}

StackL::~StackL()
{
	while (isEmpty()) {
		pop();
	}
}

void StackL::push(const int & element)
{
	pHead_ = new Node(pHead_, element);
}

void StackL::pop()
{
	bool emptiness = isEmpty();
	if (emptiness == false) {
		Node* pDell(pHead_);
		pHead_ = pHead_->pNext_;
		delete pDell;
	}
}

int& StackL::top()
{
	return pHead_->data_;
}

const int & StackL::top() const
{
	return pHead_->data_;
}

bool StackL::isEmpty() const
{
	return nullptr == pHead_;
}

void StackL::clear()
{
	bool emptiness = isEmpty();
	while (emptiness != true) {
		delete pHead_;
	}
}