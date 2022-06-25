#ifndef MURZIN_CPP_DOUBLELINKEDLIST_H
#define MURZIN_CPP_DOUBLELINKEDLIST_H

#include "LinkedList.h"

class DoubleLinkedList {
private:
    LinkedList *list;
    LinkedList *previous;
public:
    DoubleLinkedList();

    DoubleLinkedList *LinkedToDoubleLinked(LinkedList *);
};


#endif //MURZIN_CPP_DOUBLELINKEDLIST_H
