//write a program to demonstrate Queue using LinkedList

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

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    // Enqueue an element into the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == NULL) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        std::cout << "Enqueued " << value << " into the queue." << std::endl;
    }

    // Dequeue an element from the queue
    void dequeue() {
        if (front == NULL) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        int dequeuedValue = temp->data;
        delete temp;
        std::cout << "Dequeued " << dequeuedValue << " from the queue." << std::endl;

        // If front becomes nullptr, rear should also become nullptr
        if (front == NULL) {
            rear = NULL;
        }
    }

    // Get the front element of the queue
    int peek() {
        if (front == NULL) {
            std::cout << "Queue is empty. Cannot peek." << std::endl;
            return -1;
        }

        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue queue;

    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(15);

    std::cout << "Front element: " << queue.peek() << std::endl;  // Front element: 5

    queue.dequeue();
    queue.dequeue();

     
    return 0;
}

