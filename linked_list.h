#include <iostream>

template <typename T>
struct Node {
public:
    T data;
    Node <T> *next;
    Node(T value) {
        data = value;
    }
};

template <typename T>
class LinkedList {
public:
    Node <T> *head;

    LinkedList() {
        head = NULL;
    }

    Node <T> *initNode(T value) {
        Node <T>* temp = new Node <T> (value);
    return temp;
    }

    void createNodeAtEnd(T value) {
        Node <T> *temp = initNode(value);
        if (head == NULL) {
            head = temp;
            temp->next = NULL;
        }
        else if (head != NULL) {
            Node <T> *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = temp;
            temp->next = NULL;
        }
    }

    void createNodeAtPosition(int position, T value) {
        int counter = 0;
        Node <T> *temp = initNode(value);
        Node <T> *current = head;

            if (position == 0) {
                temp->next = head;
                head = temp;
            }

        while (current != NULL) {
            if (counter == position - 1) {
                temp->next = current->next;
                current->next = temp;
            }
            else {
                current = current->next;
            }
            counter++;
        }
    }

    void printList() {
        Node <T> *current = head;
        while (current != NULL) {
            std::cout<<current->data<<std::endl;
            current = current->next;
        }
    }

    Node <T> *front() {
        return head;
    }
};


/*   Below is how one would use the functions in this header file;
int main() {
    LinkedList <int> list1;
    list1.createNodeAtEnd(5);
    list1.createNodeAtEnd(6);
    list1.createNodeAtEnd(7);
    list1.createNodeAtPosition(2, 4);

    LinkedList <char> list2;
    list2.createNodeAtEnd('A');
    list1.createNodeAtEnd('B');
    list1.createNodeAtEnd('C');
    list1.createNodeAtPosition(2, 'E');

    list1.printList();
    list2.printList();
return 0;
}
*/
