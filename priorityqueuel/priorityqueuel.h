#ifndef PRIORITEQUEUEL
#define PRIORITEQUEUEL
#include <cstddef>

class PriorityQueueL {
public:
    PriorityQueueL() = default;
    ~PriorityQueueL();

    void pop();
    int& top();
    const int& top() const;
    bool isEmpty() const;
    void insert(const int& a);
    void insert(const PriorityQueueL& a);
    PriorityQueueL& operator=(const PriorityQueueL& a);

private:
    struct Node
    {
        Node* pNext_{ nullptr };
        int data_{ 0 };
        Node(Node* pNode, const int& a) : pNext_{ pNode }, data_{ a } {}
    };
    Node* pHead_{ nullptr };
};

#endif
