#include <iostream>
using namespace std;

const int MAX_SIZE = 3;
int queue[MAX_SIZE];
int front = 0;
int rear = 0;

bool isFull() {
    return rear == MAX_SIZE;
}

bool isEmpty() {
    return front == rear;
}

void enqueue(int data) {
    if (isFull()) {
        cout << "Queue is full" << endl;
        return;
    }
    queue[rear] = data;
    rear++;
}

void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = 0; i < rear - 1; i++) {
        queue[i] = queue[i + 1];
    }
    rear--;
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i < rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int getFront() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1; // Return a sentinel value
    }
    return queue[front];
}

int main() {
    display();
    cout << "After inserting elements:" << endl;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    dequeue();
    cout << "\nAfter two node deletion:" << endl;
    display();
    cout << "Front Element is: " << getFront() << endl;
    return 0;
}
