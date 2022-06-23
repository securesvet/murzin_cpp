#ifndef MURZIN_CPP_LINKEDLISTSTACK_H
#define MURZIN_CPP_LINKEDLISTSTACK_H

struct Node {
    int data; // данные узла
    Node *prev; // указатель типа node на нижний элемент
};

class LinkedListStack {
private:
    Node *top;
public:
    LinkedListStack();

    void push(int);

    void pop();

    int getTop();
};

#endif //MURZIN_CPP_LINKEDLISTSTACK_H
