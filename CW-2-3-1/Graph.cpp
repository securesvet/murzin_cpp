#include "Graph.h"

Graph::Graph() {
    this->nodes = std::vector<Node *>();
}

std::vector<Node *> Graph::getNodes() {
    return this->nodes;
}

void Graph::addNode(Node *_node) {
    this->nodes.push_back(_node);
}

void Graph::resetIsUsed() {
    for (int i = 0; i < this->getNodes().size(); ++i) {
        this->getNodes()[i]->isUsed = false;
    }
}