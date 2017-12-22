#include "stackl.h"

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
    if (!isEmpty()) {
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
    while (!isEmpty()) {
        delete pHead_;
    }
}

StackL& StackL::operator=(const StackL& a)
{
    while (!isEmpty())
    {
        pop();
    }
    if (!a.isEmpty())
    {
        pHead_ = new Node(nullptr, a.pHead_->data_);
        Node* prev = pHead_;
        Node* cur = a.pHead_->pNext_;
        while (cur != nullptr)
        {
            prev->pNext_ = new Node(nullptr, cur->data_);
            cur = cur->pNext_;
            prev = prev->pNext_;
        }
    }
    return *this;
}
