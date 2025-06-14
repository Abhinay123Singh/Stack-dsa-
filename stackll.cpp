#include<iostream>
#include<cstddef>  // for NULL
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;
    int size;

public:
    Stack() {
        top = NULL;
        size = 0;
    }

    void push(int value) {
        Node* temp = new Node(value);
        if (temp == NULL) {
            cout << "Stack Overflow\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        }
        else{
        return top->data;
    }
}

    bool isEmpty() {
        return top == NULL;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.push(40);
    S.push(50);
    S.pop();
    cout << "Top element: " << S.peek() << endl;
    cout << "Stack size: " << S.getSize() << endl;
    
    while (!S.isEmpty()) {
        cout << S.peek() << " ";
        S.pop();
    }
    cout << endl;
    
    return 0;
}

