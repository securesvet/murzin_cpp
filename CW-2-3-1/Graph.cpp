#include "Graph.h"

Graph::Graph() {
    node = std::vector<Node *>();
}

std::vector<Node *> Graph::getNode() {
    return node;
}

void Graph::addNode(Node *_node) {
    node.push_back(_node);
}

void Graph::resetIsUsed() {
    for (int i = 0; i < this->getNode().size(); ++i) {
        getNode()[i]->isUsed = false;
    }
}