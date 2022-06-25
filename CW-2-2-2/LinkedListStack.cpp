#include "LinkedListStack.h"

LinkedListStack::LinkedListStack() {
}

// Добавляет элемент на вершину стека
void LinkedListStack::push(Node *_data) {
    // _data - новая дата
    // Выделим память для стека
    LinkedListStack *tempStack = new LinkedListStack;
    tempStack->data = _data;
    if (top == nullptr) {
        top = tempStack;
    } else {
        tempStack->previous = top;
        top = tempStack;
    }
}

// Удаляет элемент с вершины стека
void LinkedListStack::pop() {
    // Выделяем память для временной переменной
    LinkedListStack *tempStack = new LinkedListStack;
    tempStack = top->previous;
    top = tempStack;
}

// Возвращает элемент с вершины стека, но не удаляет его
Node *LinkedListStack::getTop() {
    if (top != nullptr) {
        return top->data;
    }
    else {
        return nullptr;
    }
}
