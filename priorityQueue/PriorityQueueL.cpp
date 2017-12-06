#include "PriorityQueueL.h"

PriorityQueueL::~PriorityQueueL()
{
    while (!isEmpty())
    {
        pop();
    }
}
void PriorityQueueL::pop()
{
    if (!isEmpty())
    {
        Node* pDel(pHead_);
        pHead_ = pHead_->pNext_;
        delete pDel;
    }
}

int& PriorityQueueL::top()
{
    return pHead_->data_;
}

const int& PriorityQueueL::top() const
{
    return pHead_->data_;
}

bool PriorityQueueL::isEmpty() const
{
    return nullptr == pHead_;
}

void PriorityQueueL::insert(const int& a)
{
    if (isEmpty() || a > pHead_->data_)
    {
        pHead_ = new Node(pHead_, a);
        return;
    }
    Node* left = pHead_;
    Node* right = pHead_->pNext_;
    while (right != nullptr && right->data_ > a)
    {
        left = right;
        right = right->pNext_;
    }
    left->pNext_ = new Node(left->pNext_, a);
}

void PriorityQueueL::insert(const PriorityQueueL& a)
{
    Node* cur = a.pHead_;
    while (cur != nullptr)
    {
        insert(cur->data_);
        cur = cur->pNext_;
    }
}

PriorityQueueL& PriorityQueueL::operator=(const PriorityQueueL& a)
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