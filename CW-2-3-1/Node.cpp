#include "Node.h"

Node::Node() {
}

// Добавление соседей (соседа)
void Node::addNeighbours(Node *_neighbours) {
    neighbours.push_back(_neighbours);
}

// Получение соседей
std::vector<Node *> Node::getNeighbours() {
    return neighbours;
}

// Назначение соседа
Node::Node(std::vector<Node *> _neighbours) {
    this->neighbours = _neighbours;
}