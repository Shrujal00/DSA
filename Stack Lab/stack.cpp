#include <iostream>
using namespace std;

#define SIZE 5

int top = -1;

void push(int stack[], int val) {
    if(top == SIZE - 1) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stack[top] = val;
        cout << "Pushed " << val << " to the stack." << endl;
    }
}

void pop(int stack[]) {
    if(top == -1) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << "Popped " << stack[top] << " from the stack." << endl;
        top--;
    }
}

void peek(int stack[]) {
    if(top == -1) {
        cout << "Stack is Empty!" << endl;
    } else {
        cout << "Top element is: " << stack[top] << endl;
    }
}

void display(int stack[]) {
    if(top == -1) {
        cout << "Stack is Empty!" << endl;
    } else {
        cout << "Stack elements: ";
        for(int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int stack[SIZE];
    int choice, val;

    do {
        cout << "--- Stack Menu ---" << endl;
        cout << "1 > Push\n";
        cout << "2 > Pop\n";
        cout << "3 > Peek\n";
        cout << "4 > Display\n";
        cout << "5 > Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                push(stack, val);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                peek(stack);
                break;
            case 4:
                display(stack);
                break;
            case 5:
                cout << "Exited" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while(choice != 5);

    return 0;
}
