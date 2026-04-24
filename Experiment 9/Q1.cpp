#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX], top = -1;

void push(int x) {
    if(top == MAX-1) cout << "Overflow\n";
    else stack[++top] = x;
}

void pop() {
    if(top == -1) cout << "Underflow\n";
    else top--;
}

int main() {
    push(10);
    push(20);
    push(30);
    pop();

    cout << "Top element: " << stack[top];
}
