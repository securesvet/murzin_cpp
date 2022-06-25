#ifndef MURZIN_CPP_LINKEDLISTSTACKSMART_H
#define MURZIN_CPP_LINKEDLISTSTACKSMART_H

#include "memory"

class LinkedListStackSmart {
private:
    std::shared_ptr<LinkedListStackSmart> top;
    std::shared_ptr<LinkedListStackSmart> previous;
public:
    LinkedListStackSmart();

    int data;

    void push(int);

    void pop();

    int getTop();

    LinkedListStackSmart(int);
};

#endif //MURZIN_CPP_LINKEDLISTSTACKSMART_H
