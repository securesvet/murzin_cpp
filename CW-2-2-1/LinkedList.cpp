#include "LinkedList.h"

LinkedList::LinkedList() {
    // Голова = 0
    head = nullptr;
    // Хвост = 0
    tail = nullptr;
};
// Переход к предыдущему компоненту
Node* LinkedList::previous(Node *_node) {
    if (head != NULL && head->next != NULL) {
        Node *tempNode = new Node();
        tempNode = head;
        while (tempNode->next != _node) {
            tempNode = tempNode->next;
        }
        return tempNode;
    }
}
// Добавление первого элемента в односвязный список
// Другими словами замена head (головы)
void LinkedList::addFirst(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    Node *temp = new Node();
    // _data - это дата, которая поступает на вход из интерфейса
    // data - это дата в struct Node {}
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
}
// Добавление последнего элемента в список
// Аналогично с addFirst, но заменяет tail
void LinkedList::addLast(int _data) {
    // Выделяем память для временной переменной temp (temporary)
    Node *temp = new Node();
    // _data - это дата, которая поступает на вход из интерфейса
    // data - это дата в struct Node {}
    temp->data = _data;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}
// Удаляет первый элемент (head), делает head->next началом.
void LinkedList::removeFirst() {
    // _data - это дата, которая поступает на вход из интерфейса
    // data - это дата в struct Node {}
    if (head != NULL) {
        head->data = NULL;
        head = head->next;
    }
}
// Удаляет последний элемент (tail)
void LinkedList::removeLast() {
    Node *prev = previous(tail);
    prev->next = NULL;
    tail = prev;
}
// Возвращает значение элемента в начале списка
int LinkedList::getFirst() {
    if (head != NULL) {
        return head->data;
    }
}
// Возвращает значение элемента в конце списка
int LinkedList::getLast() {
    if (tail != NULL) {
        return tail->data;
    }
}
// Возвращает i-ый элемент списка или -1, если элемента по указанному индексу не существует
int LinkedList::get(int nodeIndex) {
    int count = 0;
    bool isFound = true;
    Node *nodeLookingFor = new Node;
    nodeLookingFor = head;
    if (head != NULL) {
        while (count < nodeIndex) {
            nodeLookingFor = nodeLookingFor->next;
            if (nodeLookingFor->next == NULL) {
                isFound = false;
                break;
            }
            ++count;
        }
        if (isFound) {
            return nodeLookingFor->data;
        }
        else {
            return -1;
        }
    }
}