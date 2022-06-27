#include "Graph.h"
#include "LinkedListQueue.h"
#include "LinkedListStack.h"
#include <iostream>

// Обход графа в ширину
void breadthFirstSearch(Graph *graph) {
    // Выделяем место для очереди
    LinkedListQueue *queue = new LinkedListQueue;
    queue->enqueue(graph->node[0]);
    // Выделяем место для временного узла
    Node *tempNode = new Node;
    // Пока в очереди есть первый элемент (пока очередь не пустует)
    while (queue->getFirst() != nullptr) {
        // getNeighbours.size() - количество элементов вектора
        int countNeighbours = queue->getFirst()->getNeighbours().size();
        // Если первый элемент очереди не использован
        if (!queue->getFirst()->isUsed) {
            tempNode = queue->getFirst();
            queue->getFirst()->isUsed = true;
            for (int i = 0; i < countNeighbours; ++i) {
                queue->enqueue(tempNode->getNeighbours()[i]);
            }
            queue->dequeue();
        } else {
            queue->dequeue();
        }
    }
    graph->resetIsUsed();
}

// Обход графа в глубину
void depthFirstSearch(Graph *graph) {
    // Выделяем место для стека
    LinkedListStack *stack = new LinkedListStack;
    stack->push(graph->node[0]);
    // Выделяем место для временного узла
    Node *tempNode = new Node;
    // Пока существует верхний элемент стека
    while (stack->getTop() != nullptr) {
        // getNeighbours.size() - количество элементов вектора
        int countNeighbours = stack->getTop()->getNeighbours().size();
        // Если верхушка не использована, то
        if (!stack->getTop()->isUsed) {
            tempNode = stack->getTop();
            stack->getTop()->isUsed = true;
            for (int i = 0; i < countNeighbours; ++i) {
                stack->push(tempNode->getNeighbours()[i]);
            }
        } else { // Если верхушка использована, то убираем её из стека
            stack->pop();
        }
    }
    graph->resetIsUsed();
}

int main() {
    // Выделяем место для узлов
    Node *firstNode = new Node;
    Node *secondNode = new Node;
    Node *thirdNode = new Node;
    Node *fourthNode = new Node;
    Node *fifthNode = new Node;

    //Добавляем соседей к узлам
    firstNode->addNeighbours(fifthNode);
    firstNode->addNeighbours(firstNode);

    secondNode->addNeighbours(thirdNode);
    secondNode->addNeighbours(fourthNode);
    secondNode->addNeighbours(fifthNode);

    thirdNode->addNeighbours(secondNode);
    thirdNode->addNeighbours(fourthNode);

    fourthNode->addNeighbours(secondNode);
    fourthNode->addNeighbours(thirdNode);

    fifthNode->addNeighbours(firstNode);
    fifthNode->addNeighbours(secondNode);
    fifthNode->addNeighbours(fifthNode);

    // Выделяем место для графа
    Graph *graph = new Graph();
    graph->addNode(firstNode);
    graph->addNode(secondNode);
    graph->addNode(thirdNode);
    graph->addNode(fourthNode);
    graph->addNode(fifthNode);
    breadthFirstSearch(graph);
    depthFirstSearch(graph);
    return 0;
}