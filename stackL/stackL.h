#ifndef STACKL
#define STACKL
#include <cstddef>

class StackL {
public:
    StackL() = default;
    StackL(const StackL& obj);
    ~StackL();

    void push(const int& element);
    void pop();
    int& top();
    const int& top() const;
    bool isEmpty() const;
    void clear();//?
    StackL& operator= (const StackL& a);

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