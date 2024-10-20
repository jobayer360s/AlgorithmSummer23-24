#include <bits/stdc++.h>
using namespace std;

#define n 4

class Queeue {
public:
    int A[n];
    int frontq;
    int rearq;

    Queeue() {
        frontq = 0;
        rearq = 0;
    }

    bool isFull() {
        return rearq == n;
    }

    bool isEmpty() {
        return frontq == rearq;
    }

    void enQueue(int x) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
        } else {
            A[rearq] = x;
            rearq++;
        }
    }

    void Dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            frontq++;
        }
    }

    int frontElement() {
        return A[frontq];
    }

    int rearElement() {
        return A[rearq - 1];
    }

    void showQueue() {
        if (isEmpty()) {
            cout << "Empty queue" << endl;
        } else {
            for (int i = frontq; i < rearq; i++) {
                cout << A[i] << endl;
            }
        }
    }
};

int main() {
    Queeue q;

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);

    cout << "Front element: " << q.frontElement() << endl;
    cout << "Rear element: " << q.rearElement() << endl;
    cout << "Queue contents:" << endl;
    q.showQueue();

    q.Dequeue();

    cout << "Queue contents after dequeue:" << endl;
    q.showQueue();

    return 0;
}
