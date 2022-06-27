#ifndef MURZIN_CPP_DOUBLELINKEDLIST_H
#define MURZIN_CPP_DOUBLELINKEDLIST_H

#include "LinkedList.h"

class DoubleLinkedList {
private:
    DoubleLinkedList *head;
    DoubleLinkedList *tail;
    DoubleLinkedList *next;
    DoubleLinkedList *previous;
    int data; // Дата, хранящаяся в списке
public:
    DoubleLinkedList();

    void addFirst(int);

    void addLast(int);

    DoubleLinkedList *LinkedToDoubleLinked(LinkedList *); // Метод для перевода односвязного списка в двусвязный
};


#endif //MURZIN_CPP_DOUBLELINKEDLIST_H
