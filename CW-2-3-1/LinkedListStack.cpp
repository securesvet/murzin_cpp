#include "LinkedListStack.h"

LinkedListStack::LinkedListStack() {
    top = nullptr;
}

// Добавляет элемент на вершину стека
void LinkedListStack::push(int _data) {
    // _data - новая дата
    // Выделим память для временного узла
    Node *tempNode = new Node;
    tempNode->data = _data;
    tempNode->prev = nullptr;
    if (top == nullptr) {
        top = tempNode;
    } else {
        tempNode->prev = top;
        top = tempNode;
    }
}

// Удаляет элемент с вершины стека и возвращает его значение
void LinkedListStack::pop() {
    // Выделяем память для временной переменной, в которой будет храниться указатель на предыдущий узел
    Node *tempNode = new Node;
    tempNode = top->prev;
    top = tempNode;
}

// Возвращает элемент с вершины стека, но не удаляет его
int LinkedListStack::getTop() {
    if (top != nullptr) {
        return top->data;
    }
}
