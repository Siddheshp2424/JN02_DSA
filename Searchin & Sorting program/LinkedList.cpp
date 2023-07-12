//Write a program to Demonstrate Linkedlist with insert,remove and display operations

#include <iostream>

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Linked List class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert a new node at the beginning of the linked list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        std::cout << "Inserted " << value << " into the linked list." << std::endl;
    }

    // Delete a node with a given value from the linked list
    void remove(int value) {
        if (head == NULL) {
            std::cout << "Linked list is empty. Cannot remove." << std::endl;
            return;
        }

        Node* current = head;
        Node* prev = NULL;

        // Search for the node to delete
        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }

        // If node not found
        if (current == NULL) {
            std::cout << "Node with value " << value << " not found in the linked list." << std::endl;
            return;
        }

        // Remove the node
        if (prev == NULL) {
            // If the node to delete is the first node
            head = current->next;
        } else {
            // If the node to delete is not the first node
            prev->next = current->next;
        }

        delete current;
        std::cout << "Deleted node with value " << value << " from the linked list." << std::endl;
    }

    // Display the linked list
    void display() {
        if (head == NULL) {
            std::cout << "Linked list is empty." << std::endl;
        } else {
            Node* temp = head;
            std::cout << "Linked list: ";
            while (temp != NULL) {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    LinkedList linkedList;

    linkedList.display();  // Linked list is empty.

    linkedList.insert(5);
    linkedList.insert(10);
    linkedList.insert(15);
    linkedList.insert(20);

    linkedList.display();  // Linked list: 20 15 10 5

    linkedList.remove(15);
    linkedList.remove(7);  // Node with value 7 not found in the linked list.

    linkedList.display();  // Linked list: 20 10 5

    return 0;
}
