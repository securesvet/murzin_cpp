#include "LinkedListQueue.h"
#include <iostream>

int main() {
    LinkedListQueue queue;
    Node *nodeQueue = new Node;
    nodeQueue = NULL;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.dequeue();
    nodeQueue = queue.getFirst();
    std::cout << nodeQueue->data; // 2 (По итогу в очереди стоят 2 3)
}