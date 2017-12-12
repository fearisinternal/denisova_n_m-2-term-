#include "PriorityQueueA.h"
#include "array.h"

PriorityQueueA::~PriorityQueueA()
{
    while (!isEmpty())
    {
        pop();
    }
}
void PriorityQueueA::pop()
{
    if (!isEmpty())
    {
        if (head + 1 <= arr.size()) head++;
        else (head = 0);
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

void refresh(const PriorityQueueA& arr, int head) {
    Array new_a;
    int i = 0;
    while (head+i < arr.size()) {
        new_a[i] = arr[head+i];
        i++;
    }
    while (tail < head) {
        new_a[i + tail] = arr[tail];
        tail++;
    }
    std::swap(new_a, arr);
    head = 0; tail = arr.size() - 1;
}


void PriorityQueueA::insert(const int& i)
{
    if (head+a.size()-tail < arr.capacity()){
        if (tail + 1 < arr.size()) {
            arr.insert(i, tail);
            tail++
        }
        else {
            arr.insert(i, 0);
            tail = 0;
        }
    }
    else {
        arr.refresh(arr, head);
        arr.insert(i, tail);
    }
}

//void PriorityQueueA::insert(const PriorityQueueA& a)

