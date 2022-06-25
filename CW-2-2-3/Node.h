#ifndef MURZIN_CPP_NODE_H
#define MURZIN_CPP_NODE_H

#include <vector>

class Node {
private:
    std::vector<Node *> neighbours;
public:
    Node();

    bool isUsed;

    std::vector<Node *> getNeighbours();

    void addNeighbours(Node *);
};


#endif //MURZIN_CPP_NODE_H
