#ifndef MURZIN_CPP_LINKEDLIST_H
#define MURZIN_CPP_LINKEDLIST_H

struct Component {
    int data;
    Component* next;
};


class LinkedList {
private:
    Component *head;
    Component *tail;
    Component *previous(Component *);
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
