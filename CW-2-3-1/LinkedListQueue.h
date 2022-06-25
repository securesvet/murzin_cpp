//
// Created by mursv on 6/24/2022.
//

#ifndef MURZIN_CPP_LINKEDLISTQUEUE_H
#define MURZIN_CPP_LINKEDLISTQUEUE_H

#include "Node.h"

class LinkedListQueue {
private:
    LinkedListQueue *begin = nullptr; // Начало очереди
    LinkedListQueue *end = nullptr; // Конец очереди
    LinkedListQueue *next = nullptr; // Указатель на следующий элемент очереди
public:
    LinkedListQueue();

    Node *data;

    void enqueue(Node *);

    Node *dequeue();

    Node *getFirst();
};


#endif //MURZIN_CPP_LINKEDLISTQUEUE_H
