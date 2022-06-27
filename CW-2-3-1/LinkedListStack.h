#ifndef MURZIN_CPP_LINKEDLISTSTACK_H
#define MURZIN_CPP_LINKEDLISTSTACK_H

#include "Node.h"

class LinkedListStack {
private:
    LinkedListStack *top; // Самый верхний элемент
    LinkedListStack *previous; // Ниже стоящий элемент
    Node *data; // Дата элемента стека (в нашем случае узел)
public:
    LinkedListStack();

    void push(Node *);

    void pop();

    Node *getTop();
};

#endif //MURZIN_CPP_LINKEDLISTSTACK_H
