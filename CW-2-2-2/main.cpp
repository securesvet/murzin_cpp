//
// Created by mursv on 6/24/2022.
//
#include <iostream>
#include "LinkedListStack.h"

int main() {
    LinkedListStack Stack;
    Stack.push(1);
    Stack.push(2);
    Stack.push(3);
    Stack.push(4);
    Stack.push(5);
    Stack.push(6);
    Stack.pop(); // Удаляет элемент 6
    std::cout << Stack.getTop(); // 5
    return 0;
}