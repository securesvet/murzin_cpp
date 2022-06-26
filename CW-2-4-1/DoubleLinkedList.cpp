#include "DoubleLinkedList.h"

DoubleLinkedList::DoubleLinkedList() {
    // Делаем указатель на head, tail, next и предыдущий элемент равный nullptr
    head = nullptr;
    tail = nullptr;
    next = nullptr;
    previous = nullptr;
}
//Добавление первого элемента в двусвязный список
void DoubleLinkedList::addFirst(int _data) {
    // Выделяем память для временной переменной tempDouble (temporary)
    DoubleLinkedList *tempDouble = new DoubleLinkedList();
    // _data - это дата, которая поступает на вход из интерфейса
    tempDouble->data = _data;
    tempDouble->next = nullptr;
    tempDouble->previous = nullptr;
    if (head == nullptr) {
        head = tempDouble;
        tail = tempDouble;
    } else {
        tempDouble->next = head;
        head = tempDouble;
    }
}
// Добавление последнего элемента в двусвязный список
void DoubleLinkedList::addLast(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    DoubleLinkedList *tempDouble = new DoubleLinkedList();
    // _data - это дата, которая поступает на вход из интерфейса
    tempDouble->data = _data;
    tempDouble->next = nullptr;
    tempDouble->previous = nullptr;
    // Если списка ещё не существует
    if (head == nullptr) {
        head = tempDouble;
        tail = tempDouble;
    } else { // В противном случае задаём указатель на предыдущий элемент хвосту
        tail->next = tempDouble;
        tempDouble->previous = tail;
        tail = tempDouble;
    }
}
// Метод для перевода односвязного списка в двусвязный
DoubleLinkedList *DoubleLinkedList::LinkedToDoubleLinked(LinkedList *_linkedList) {
    // Выделим память для элемента двусвязного списка
    DoubleLinkedList *doubleList = new DoubleLinkedList;
    // Выделяем память для временной переменной для копирования
    LinkedList *tempList = new LinkedList;
    tempList = _linkedList;
    // Если список не пустой
    if (!tempList->getHead()) {
        doubleList->addFirst(tempList->getFirst());
        // Переходим к самому концу списка
        while (tempList->getNext() != nullptr) {
            // Добавляем дату элементов односвязного списка в двусвязный
            // При этом в методе addLast уже создаётся указатель на предыдущий элемент
            // Поэтому previous здесь не надо указывать.
            doubleList->addLast(tempList->getFirst());
            tempList = tempList->getNext();
        }
    }
}