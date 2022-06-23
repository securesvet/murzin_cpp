#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    // Голова = 0
    head = NULL;
    // Хвост = 0
    tail = NULL;
};
// Переход к предыдущему компоненту
Component* LinkedList::previous(Component *comp) {
    if (head != NULL && head->next != NULL) {
        Component *pComponent = new Component();
        pComponent = head;
        while (pComponent->next != comp) {
            pComponent = pComponent->next;
        }
        return pComponent;
    }
}
// Добавление первого элемента в односвязный список
// Другими словами замена head (головы)
void LinkedList::addFirst(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    Component *temp = new Component();
    // _data - это дата, которая поступает на вход из интерфейса
    // data - это дата в struct Component {}
    temp->data= _data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
       temp->next = head;
       head = temp;
    }
    delete temp;
}
// Добавление последнего элемента в список
// Аналогично с addFirst, но заменяет tail
void LinkedList::addLast(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    Component *temp = new Component();
    // _data - это дата, которая поступает на вход из интерфейса
    // data - это дата в struct Component {}
    temp->data= _data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
    delete temp;
}
// Удаляет первый элемент (head), делает head->next началом.
void LinkedList::removeFirst() {
    // _data - это дата, которая поступает на вход из интерфейса
    // data - это дата в struct Component {}
    if (head != NULL) {
        head->data = NULL;
        head = head->next;
    }
}
// Удаляет последний элемент (tail)
void LinkedList::removeLast() {
    Component *prev = previous(tail);
    prev->next = NULL;
    tail = prev;
    delete prev;
}
// Возвращает значение элемента в начале списка
int LinkedList::getFirst() {
    return head->data;
}
// Возвращает значение элемента в конце списка
int LinkedList::getLast() {
    return tail->data;
}
// Возвращает i-ый элемент списка или -1, если элемента по указанному индексу не существует
int LinkedList::get(int componentIndex) {
    int count = 0;
    bool isFound = true;
    Component *componentLookingFor = new Component;
    componentLookingFor = head;
    if (head != NULL) {
        while (count <= componentIndex) {
            componentLookingFor = componentLookingFor->next;
            if (componentLookingFor->next = NULL) {
                isFound = false;
                break;
            }
            ++count;
        }
        if (isFound) {
            return componentLookingFor->data;
        }
        else {
            return -1;
        }
    }
}