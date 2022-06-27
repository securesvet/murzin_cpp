#ifndef MURZIN_CPP_LINKEDLISTSTACK_H
#define MURZIN_CPP_LINKEDLISTSTACK_H

#include "Node.h"
#include <stdexcept>

class LinkedListStack {
private:
    LinkedListStack *top;
    LinkedListStack *previous;
    Node *data;
public:
    LinkedListStack();

    void push(Node *);

    void pop();

    Node *getTop();
};

#endif //MURZIN_CPP_LINKEDLISTSTACK_H
