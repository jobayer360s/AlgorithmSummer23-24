#include <bits/stdc++.h>
using namespace std;

#define n 4
int A[n];
int frontq = 0;
int rearq = 0;

bool isFull() {
    return rearq == n - 1;
}

bool isEmpty() {
    return frontq == rearq - 1;
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

int main() {
    enQueue(10);
    enQueue(20);
    enQueue(30);

    cout << "Front element: " << frontElement() << endl;
    cout << "Rear element: " << rearElement() << endl;
    cout << "Queue contents:" << endl;
    showQueue();
     Dequeue();
       cout << "Queue contents:" << endl;
     showQueue();
    return 0;
}
