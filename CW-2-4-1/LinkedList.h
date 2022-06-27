#ifndef MURZIN_CPP_LINKEDLIST_H
#define MURZIN_CPP_LINKEDLIST_H

#include <stdexcept>
#include <cstring>

class LinkedList {
private:
    LinkedList *head;
    LinkedList *tail;
    LinkedList *next;
    LinkedList *Previous(LinkedList *);
    int data;

public:
    LinkedList();

    void addFirst(int);

    void addLast(int);

    void removeFirst();

    void removeLast();

    LinkedList *getNext();

    LinkedList *getHead();

    int getFirst();

    int getLast();

    int get(int);
};


#endif //MURZIN_CPP_LINKEDLIST_H
