//
// Created by mursv on 6/24/2022.
//

#ifndef MURZIN_CPP_LINKEDLISTQUEUE_H
#define MURZIN_CPP_LINKEDLISTQUEUE_H

struct Node {
    int data; // Дата узла
    Node *next; // Указатель на следующий узел
};

class LinkedListQueue {
private:
    Node *begin; // Начало очереди
    Node *end; // Конец очереди
public:
    LinkedListQueue();

    void enqueue(int);

    int dequeue();

    Node *getFirst();
};


#endif //MURZIN_CPP_LINKEDLISTQUEUE_H
