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
        // Выделяем место для временного списка
        LinkedList *tempList = new LinkedList();
        tempList = head;
        while (tempList->next != _listElement) {
            tempList = tempList->next;
        }
        return tempList;
    }
}

// Добавление первого элемента в односвязный список
// Другими словами замена head (головы)
void LinkedList::addFirst(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    LinkedList *tempList = new LinkedList();
    // _data - это дата, которая поступает на вход из интерфейса
    // data - это дата в struct Node {}
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
    // data - это дата в struct Node {}
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
    // data - это дата в struct Node {}
    if (head != nullptr) {
        head->data = NULL;
        head = head->next;
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
    }
}

// Возвращает значение элемента в конце списка
int LinkedList::getLast() {
    if (tail != nullptr) {
        return tail->data;
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
        if (isFound) {
            return elementLookingFor->data;
        } else {
            return -1;
        }
    }
}

// пустой ли список
bool LinkedList::isEmpty() {
    if (head == nullptr) {
        return true;
    } else {
        return false;
    }
}

// Возвращает значение head
LinkedList *LinkedList::getHead() {

}

// Возвращает значение tail
LinkedList *LinkedList::getTail() {
    if (!isEmpty()) {
        return tail;
    }
}

// Возвращает next
LinkedList *LinkedList::getNext() {
    if (!isEmpty()) {
        return next;
    }
}

// Задаёт значение переменной head
void LinkedList::setHead(LinkedList *_head) {
    this->head = _head;
}
// Задаёт значение переменной tail
void LinkedList::setTail(LinkedList *_tail) {
    this->tail = _tail;
}
// Задаёт значение переменной next
void LinkedList::setNext(LinkedList *_next) {
    this->next = _next;
}