#include "LinkedListQueue.h"

LinkedListQueue::LinkedListQueue() {
    // begin - начало очереди
    begin = nullptr;
    // end - конец очереди
    end = nullptr;
}

// Добавляет элемент в конец очереди
void LinkedListQueue::enqueue(int _data) {
    // _data - новое значение, встающее в очередь
    // Выделим место для нового временного узла tempNode
    Node *tempNode = new Node;
    tempNode->data = _data;
    tempNode->next = nullptr;
    if (begin == nullptr) {
        // Если вообще очереди нет, то элемент первый и последний
        begin = tempNode;
        end = tempNode;
    } else {
        // Конечный ссылается на следующий элемент, который встал в очередь
        end->next = tempNode;
        // Тогда конечный элемент будет этот самый временный узел
        end = tempNode;
    }
}

// Удаляет элемент с начала очереди и возвращает его значение
int LinkedListQueue::dequeue() {
    // Выделим место для временного узла tempNode;
    Node *tempNode = new Node;
    // В случае если очередь вообще существует
    if (begin != nullptr) {
        tempNode = begin->next;
        begin = tempNode;
    }
    return tempNode->data;
}

// Возвращает элемент с начала очереди, но не удаляет его
Node *LinkedListQueue::getFirst() {
    return begin;
}