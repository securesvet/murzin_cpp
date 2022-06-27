#include "LinkedListQueue.h"
#include <iostream>

int main() {
    LinkedListQueue *queue = new LinkedListQueue;
    Node *firstNode = new Node;
    Node *secondNode = new Node;
    Node *thirdNode = new Node;
    Node *fourthNode = new Node;
    Node *fifthNode = new Node;
    Node *_node = new Node;
    queue->enqueue(firstNode);
    queue->enqueue(secondNode);
    queue->enqueue(thirdNode);
    queue->enqueue(fourthNode);
    queue->enqueue(fifthNode);
    _node = queue->dequeue(); // _node = firstNode
    _node = queue->getFirst(); // _node = secondNode
    return 0;
}