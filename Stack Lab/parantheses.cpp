#include <iostream>
using namespace std;
int main() {
    string expr;
    cout << "Enter the expression: ";
    cin >> expr;

    char stack[100];
    int top = -1;

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        }

        else if (ch == ')' || ch == ']' || ch == '}') {
            if (top == -1) {
                cout << "Unbalanced\n";
                return 0;
            }
            char open = stack[top--];
            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{')) {
                cout << "Unbalanced\n";
                return 0;
            }
        }
    }

    if (top == -1) {
        cout << "Balanced\n";
    } else {
        cout << "Unbalanced\n";
    }

    return 0;
}
