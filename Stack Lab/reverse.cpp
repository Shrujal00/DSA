#include <iostream>
using namespace std;

#define SIZE 5

void reverseStack(int stack[]) {
    int tempStack[SIZE];
    int top = SIZE - 1;

    for (int i = 0; i < SIZE; i++) {
        tempStack[i] = stack[top];
        top--;
    }

    for (int i = 0; i < SIZE; i++) {
        stack[i] = tempStack[i];
    }
}

void displayStack(int stack[]) {
    cout << "Stack: ";
    for (int i = 0; i < SIZE; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    int stack[SIZE] = {1, 2, 3, 4, 5};

    cout << "Original Stack:" << endl;
    displayStack(stack);
    reverseStack(stack);

    cout << "Reversed Stack:" << endl;
    displayStack(stack);

    return 0;
}
