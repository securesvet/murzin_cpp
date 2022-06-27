#include "LinkedListStack.h"

LinkedListStack::LinkedListStack() {
    // Присваиваем top, previous, data nullptr'ы
    top = nullptr;
    previous = nullptr;
    data = nullptr;
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
    if (top->previous != nullptr) {
        tempStack = top->previous;
        top = tempStack;
    } else {
        throw std::runtime_error("Stack is Empty");
    }
}

// Возвращает элемент с вершины стека, но не удаляет его
Node *LinkedListStack::getTop() {
    if (top != nullptr) {
        return top->data;
    } else {
        throw std::runtime_error("Stack is Empty");
    }
}
