#include "DoubleLinkedList.h"
#include <iostream>

int main() {
    LinkedList *List;
    List->addFirst(1);
    List->addLast(2);
    List->addLast(3);

    DoubleLinkedList *doubleList = new DoubleLinkedList;
    doubleList = doubleList->LinkedToDoubleLinked(List);
    return 0;
}