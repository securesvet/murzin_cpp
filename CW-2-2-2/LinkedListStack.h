#ifndef MURZIN_CPP_LINKEDLISTSTACK_H
#define MURZIN_CPP_LINKEDLISTSTACK_H
#include "Node.h"

class LinkedListStack {
private:
    LinkedListStack *top = nullptr;
    LinkedListStack *previous = nullptr;
public:
    LinkedListStack();

    Node* data;

    void push(Node *);

    void pop();

    Node *getTop();
};

#endif //MURZIN_CPP_LINKEDLISTSTACK_H
