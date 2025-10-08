#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *arr;

    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
        cout << "Stack of size " << size << "created" << endl;
    }

    void push(int val)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = val;
            cout << "Pushed " << val << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow";
            return;
        }
        else
        {
            cout << "Popped " << arr[top] << endl;
            top--;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return;
        }
        else
        {
            cout << "Stack (top -> bottom): ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    ~Stack() {
        delete[] arr;
        cout << "Stack Memory released!" << endl;
    }
};

int main()
{
    Stack s1(5);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.pop();
    s1.display();
}