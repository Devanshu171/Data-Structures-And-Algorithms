#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *top = NULL;

void push(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = top;
    top = t;
}

int pop()
{
    int x;
    if (top == NULL)
    {
        return -1;
    }
    else
    {
        Node *t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}
void display()
{
    Node *t = top;
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

void peek(int pos)
{
    if (top != NULL)
    {
        Node *t = top;
        int n = 1;
        while (t != NULL && n != pos)
        {
            t = t->next;
            n++;
        }
        if (t != NULL)
            cout << t->data;
        else
            cout << "not found" << endl;
    }
    else
        cout << "Empty stack";
}

bool isEmpty()
{
    return top ? 0 : 1;
}
void isFull()
{
    Node *t = new Node;
    if (t == NULL)
        cout << "Full";
    else
        cout << "not full";
    delete t;
}
int main()
{
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    peek(2);

    return 0;
}