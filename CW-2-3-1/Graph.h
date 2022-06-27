#ifndef MURZIN_CPP_GRAPH_H
#define MURZIN_CPP_GRAPH_H

#include "Node.h"

class Graph {
public:
    Graph();

    std::vector<Node *> node;

    std::vector<Node *> getNode();

    void addNode(Node *);

    void resetIsUsed();
};


#endif //MURZIN_CPP_GRAPH_H
