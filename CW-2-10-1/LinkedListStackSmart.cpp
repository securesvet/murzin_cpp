//
// Created by mursv on 6/26/2022.
//

#include "LinkedListStackSmart.h"

LinkedListStackSmart::LinkedListStackSmart() {
    top = nullptr;
    previous = nullptr;
}

LinkedListStackSmart::LinkedListStackSmart(int _data) {
    data = _data;
    top = nullptr;
    previous = nullptr;
}


// Добавляет элемент на вершину стека
void LinkedListStackSmart::push(int _data) {
    // _data - новая дата
    // Умный указатель (временная переменная стека)
    auto tempStack = std::make_shared<LinkedListStackSmart>(_data);
    if (top == nullptr) {
        top = tempStack;
    } else {
        tempStack->previous = top;
        top = tempStack;
    }
}

// Удаляет элемент с вершины стека
void LinkedListStackSmart::pop() {
    // Умный указатель (временная переменная стека)
    auto tempStack = std::make_shared<LinkedListStackSmart>();
    tempStack = top->previous;
    top = tempStack;
}

// Возвращает элемент с вершины стека, но не удаляет его
int LinkedListStackSmart::getTop() {
    if (top != nullptr) {
        return top->data;
    }
}