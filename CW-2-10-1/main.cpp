//
// Created by mursv on 6/26/2022.
//
#include <iostream>
#include "LinkedListStackSmart.h"

int main() {
    LinkedListStackSmart stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.pop(); // Удаляет элемент 6
    std::cout << stack.getTop(); // 5
    return 0;
}