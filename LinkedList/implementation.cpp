#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print_List()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position is invalid";
                return;
            }

            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linked List is empty";
            return;
        }
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void itrSearch(int key)
    {
        Node *temp = head;
        int i = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                cout << "Key Found at " << i;
            }
            temp = temp->next;
            i++;
        }
    }

    int helper(Node *temp, int key)
    {
        if (temp == NULL)
        {
            return -1;
        }

        if (temp->data == key)
        {
            return 0;
        }

        int idx = helper(temp->next, key);
        if (idx == -1)
        {
            return -1;
        }
    }
    void recurSearch(int key)
    {
        helper(head, key);
    }
};

int main()
{
    List l1;
    // l1.push_back(1);
    // l1.push_back(2);
    // l1.push_back(3);
    // l1.print_List();
    // l1.insert(100, 2);
    // l1.print_List();
    // l1.pop_back();
    // l1.print_List();
    // l1.itrSearch(1); -> example
}