#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList List;
    List.addFirst(1);
    List.addLast(2);
    List.addLast(3);
    List.addLast(4);
    List.addLast(5);
    List.addLast(6);
    List.addLast(7);
    List.removeFirst();
    List.removeLast();
    List.getFirst(); // 2
    List.getLast(); // 6
    List.get(2); // 4
    return 0;
}