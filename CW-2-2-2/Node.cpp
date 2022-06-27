#include "Node.h"

Node::Node() {
    isUsed = false;
}

// Добавление соседей (соседа)
void Node::addNeighbours(Node *_neighbours) {
    neighbours.push_back(_neighbours);
}

// Получение соседей
std::vector<Node *> Node::getNeighbours() {
    return neighbours;
}

