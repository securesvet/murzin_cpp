#include "LinkedListQueue.h"

LinkedListQueue::LinkedListQueue() {
}

// Добавляет элемент в конец очереди
void LinkedListQueue::enqueue(Node *_data) {
    // _data - новое значение, встающее в очередь
    // Выделим место для временной очереди tempQueue
    LinkedListQueue *tempQueue = new LinkedListQueue;
    tempQueue->data = _data;
    tempQueue->next = nullptr;
    if (begin == nullptr) {
        // Если вообще очереди нет, то элемент первый и последний
        begin = tempQueue;
        end = tempQueue;
    } else {
        // Конечный ссылается на следующий элемент, который встал в очередь
        end->next = tempQueue;
        // Тогда конечный элемент будет этой самой временной очередью
        end = tempQueue;
    }
}

// Удаляет элемент с начала очереди и возвращает его значение
Node *LinkedListQueue::dequeue() {
    // Выделим место для временной очереди tempQueue;
    LinkedListQueue *tempQueue = new LinkedListQueue;
    // Временная очередь для хранения удалённой переменной для возврата значения, выделяем память
    LinkedListQueue *tempDeletedQueue = new LinkedListQueue;
    tempDeletedQueue->data = begin->data;
    // В случае если очередь вообще существует
    if (begin != nullptr) {
        tempQueue = begin->next;
        begin = tempQueue;
        return tempDeletedQueue->data;
    } else {
        return nullptr;
    }
}

// Возвращает элемент с начала очереди, но не удаляет его
Node *LinkedListQueue::getFirst() {
    if (begin != nullptr) {
        return begin->data;
    } else {
        return nullptr;
    }
}