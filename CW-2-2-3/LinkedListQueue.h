//
// Created by mursv on 6/24/2022.
//

#ifndef MURZIN_CPP_LINKEDLISTQUEUE_H
#define MURZIN_CPP_LINKEDLISTQUEUE_H

#include "Node.h"

class LinkedListQueue {
private:
    LinkedListQueue *begin; // Начало очереди
    LinkedListQueue *end; // Конец очереди
    LinkedListQueue *next; // Указатель на следующий элемент очереди
    Node *data; // Дата каждого элемента (узел)
public:
    LinkedListQueue();

    void enqueue(Node *);

    Node *dequeue();

    Node *getFirst();
};


#endif //MURZIN_CPP_LINKEDLISTQUEUE_H
