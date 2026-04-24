#include <iostream>
using namespace std;

int q[5], front = -1, rear = -1;

void enqueue(int x) {
    if(rear == 4) cout << "Full\n";
    else {
        if(front == -1) front = 0;
        q[++rear] = x;
    }
}

void dequeue() {
    if(front == -1 || front > rear) cout << "Empty\n";
    else front++;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();

    cout << "Front: " << q[front];
}
