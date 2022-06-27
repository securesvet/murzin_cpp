#include "DoubleLinkedList.h"
#include <iostream>

int main() {
    LinkedList *List;
    List->addFirst(1);
    List->addLast(2);
    List->addLast(3);

    DoubleLinkedList *firstDoubleList = new DoubleLinkedList;
    DoubleLinkedList *secondDoubleList = new DoubleLinkedList;
    secondDoubleList = firstDoubleList->LinkedToDoubleLinked(List);
    return 0;
}