#include "LinkedList.h"
#include <iostream>

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
    std::cout << List.getFirst() << '\n'; // 2
    std::cout << List.getLast() << '\n'; // 6
    std::cout << List.get(2); // 4
    return 0;
}