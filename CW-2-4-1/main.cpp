#include "DoubleLinkedList.h"
#include <iostream>

int main() {
    LinkedList *List;
    List->addFirst(1);
    List->addLast(2);
    List->addLast(3);
    List->addLast(4);
    List->addLast(5);

    auto doubleList = new DoubleLinkedList;
    doubleList = doubleList->LinkedToDoubleLinked(List);

    return 0;
}