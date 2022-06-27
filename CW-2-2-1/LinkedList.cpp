#include "LinkedList.h"

LinkedList::LinkedList() {
    // Голова = 0
    head = nullptr;
    // Хвост = 0
    tail = nullptr;
};

// Переход к предыдущему компоненту
LinkedList *LinkedList::Previous(LinkedList *_listElement) {
    if (head != nullptr && head->next != nullptr) {
        // Присваиваем временному односвязному списку голову
        LinkedList *tempList = head;
        while (tempList->next != _listElement) {
            tempList = tempList->next;
        }
        return tempList;
    } else {
        throw std::runtime_error("List is Empty");
    }
}

// Добавление первого элемента в односвязный список
// Другими словами замена head (головы)
void LinkedList::addFirst(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    LinkedList *tempList = new LinkedList();
    // _data - это дата, которая поступает на вход из интерфейса
    tempList->data = _data;
    tempList->next = nullptr;
    if (head == nullptr) {
        head = tempList;
        tail = tempList;
    } else {
        tempList->next = head;
        head = tempList;
    }
}

// Добавление последнего элемента в список
// Аналогично с addFirst, но заменяет tail
void LinkedList::addLast(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    LinkedList *tempList = new LinkedList();
    // _data - это дата, которая поступает на вход из интерфейса
    tempList->data = _data;
    tempList->next = nullptr;
    if (head == nullptr) {
        head = tempList;
        tail = tempList;
    } else {
        tail->next = tempList;
        tail = tempList;
    }
}

// Удаляет первый элемент (head), делает head->next началом.
void LinkedList::removeFirst() {
    // _data - это дата, которая поступает на вход из интерфейса
    if (head != nullptr) {
        head = head->next;
    } else {
        throw std::runtime_error("List is Empty");
    }
}

// Удаляет последний элемент (tail)
void LinkedList::removeLast() {
    // Создаём элемент, указывающий на элемент перед хвостом
    LinkedList *previousElement = Previous(tail);
    previousElement->next = nullptr;
    tail = previousElement;
}

// Возвращает значение элемента в начале списка
int LinkedList::getFirst() {
    if (head != nullptr) {
        return head->data;
    } else {
        throw std::runtime_error("List is Empty");
    }
}

// Возвращает значение элемента в конце списка
int LinkedList::getLast() {
    if (tail != nullptr) {
        return tail->data;
    } else {
        throw std::runtime_error("List is Empty");
    }
}

// Возвращает i-ый элемент списка или -1, если элемента по указанному индексу не существует
int LinkedList::get(int nodeIndex) {
    int count = 0;
    bool isFound = true;
    LinkedList *elementLookingFor = new LinkedList;
    elementLookingFor = head;
    if (head != nullptr) {
        while (count < nodeIndex) {
            elementLookingFor = elementLookingFor->next;
            if (elementLookingFor->next == nullptr) {
                isFound = false;
                break;
            }
            ++count;
        }
    }
    if (isFound) {
        return elementLookingFor->data;
    } else {
        return -1;
    }
}