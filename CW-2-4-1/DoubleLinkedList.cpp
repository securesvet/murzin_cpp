#include "DoubleLinkedList.h"

DoubleLinkedList::DoubleLinkedList() {
    // Делаем указатель на предыдущий элемент равный nullptr
    previous = nullptr;
}

DoubleLinkedList *DoubleLinkedList::LinkedToDoubleLinked(LinkedList *_linkedList) {
    // Выделим память для элемента двусвязного списка, чтобы хранить previous
    DoubleLinkedList *doubleList = new DoubleLinkedList;

    // Если список не пустой
    if (!_linkedList->isEmpty()) {
        doubleList->list->setHead(_linkedList->getHead());
        doubleList->list->setTail(_linkedList->getTail());
        _linkedList->removeFirst();
        while (_linkedList->getNext() != nullptr) {
          //  doubleList->list->setNext
          //  _linkedList->removeFirst();

        }

    }
}