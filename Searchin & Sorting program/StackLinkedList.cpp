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

// Stack class
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node(value);
        if (top == NULL) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
        std::cout << "Pushed " << value << " onto the stack." << std::endl;
    }

    // Pop an element from the stack
    void pop() {
        if (top == NULL) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        int poppedValue = temp->data;
        delete temp;
        std::cout << "Popped " << poppedValue << " from the stack." << std::endl;
    }

    // Get the top element of the stack
    int peek() {
        if (top == NULL) {
            std::cout << "Stack is empty. Cannot peek." << std::endl;
            return -1;
        }

        return top->data;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    std::cout << "Top element: " << stack.peek() << std::endl;  // Top element: 15

    stack.pop();
    stack.pop();

 

    return 0;
}
