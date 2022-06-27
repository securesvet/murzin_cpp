#include "Node.h"

Node::Node() {
    // Флаг того, что мы проходили этот узел изначально false (Нужно для поиска в глубину и ширину)
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

