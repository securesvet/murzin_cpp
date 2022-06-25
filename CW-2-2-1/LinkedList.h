#ifndef MURZIN_CPP_LINKEDLIST_H
#define MURZIN_CPP_LINKEDLIST_H

#include <cstring>

class LinkedList {
private:
    LinkedList *head;
    LinkedList *tail;
    LinkedList *next;


public:
    LinkedList();

    int data;

    LinkedList *Previous(LinkedList *);

    void addFirst(int);

    void addLast(int);

    void removeFirst();

    void removeLast();

    int getFirst();

    int getLast();

    int get(int);
};


#endif //MURZIN_CPP_LINKEDLIST_H
