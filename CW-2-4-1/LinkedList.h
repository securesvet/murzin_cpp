#ifndef MURZIN_CPP_LINKEDLIST_H
#define MURZIN_CPP_LINKEDLIST_H

#include <cstring>

class LinkedList {
private:
    LinkedList *tail;
    LinkedList *next;
    LinkedList *head;
    LinkedList *previous;

public:
    LinkedList();

    int data;

    LinkedList *Previous(LinkedList *);

    void addFirst(int);

    void addLast(int);

    void removeFirst();

    void removeLast();

    bool isEmpty();

    LinkedList *getHead();

    LinkedList *getTail();

    LinkedList *getNext();

    void setHead(LinkedList *);

    void setTail(LinkedList *);

    void setNext(LinkedList *);

    int getFirst();

    int getLast();

    int get(int);

};


#endif //MURZIN_CPP_LINKEDLIST_H
