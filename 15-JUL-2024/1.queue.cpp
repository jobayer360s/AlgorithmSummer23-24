#include <iostream>
using namespace std;

class Queue {
private:
    int* q;
    int front, rear, capacity;

public:
    Queue(int c) {
        capacity = c;
        q = new int[capacity];
        front = rear = 0;
    }

    ~Queue() {
        delete[] q;
    }

    void Enqueue(int d) {
        if (rear == capacity) {
            cout << "Queue is full" << endl;
            return;
        } else {
            q[rear] = d;
            rear++;
        }
    }

    void Dequeue() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return;
        } else {
            for (int i = 0; i < rear - 1; i++) {
                q[i] = q[i + 1];
            }
            rear--;
        }
    }

    void Display() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i < rear; i++) {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    void Front() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Front Element is: " << q[front] << endl;
    }
};

int main() {
    Queue qu(3);
    qu.Display();
    cout << "After inserting elements:" << endl;
    qu.Enqueue(10);
    qu.Enqueue(20);
    qu.Enqueue(30);
    qu.Display();
    qu.Dequeue();
    qu.Dequeue();
    cout << "\nAfter two node deletion:" << endl;
    qu.Display();
    qu.Front();
    return 0;
}
