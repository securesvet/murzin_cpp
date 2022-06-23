#ifndef MURZIN_CPP_LINKEDLIST_H
#define MURZIN_CPP_LINKEDLIST_H

struct Node {
    int data;
    Node *next;
};


class LinkedList {
private:
    Node *head;
    Node *tail;

    Node *previous(Node *);

public:
    LinkedList();

    void addFirst(int);

    void addLast(int);

    void removeFirst();

    void removeLast();

    int getFirst();

    int getLast();

    int get(int);
};


#endif //MURZIN_CPP_LINKEDLIST_H
