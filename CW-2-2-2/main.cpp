//
// Created by mursv on 6/24/2022.
//
#include <iostream>
#include "LinkedListStack.h"

int main() {
    LinkedListStack *stack = new LinkedListStack;
    Node *firstNode = new Node;
    Node *secondNode = new Node;
    Node *thirdNode = new Node;
    Node *fourthNode = new Node;
    Node *fifthNode = new Node;
    Node *_node = new Node;
    stack->push(firstNode);
    stack->push(secondNode);
    stack->push(thirdNode);
    stack->push(fourthNode);
    stack->push(fifthNode);
    stack->pop(); // удаляет fifthNode (пятый узел)
    _node = stack->getTop();

    return 0;
}