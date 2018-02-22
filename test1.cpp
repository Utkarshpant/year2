#include "linked_list.h"
int main() {
    LinkedList <int> list1;
    list1.createNodeAtEnd(5);
    list1.createNodeAtEnd(6);
    list1.createNodeAtEnd(7);
    list1.createNodeAtPosition(3, 0);
    list1.createNodeAtPosition(0, 80);
    list1.printList();

    LinkedList <std::string> list2;
    list2.createNodeAtEnd("AB");
    list2.printList();

return 0;
}

