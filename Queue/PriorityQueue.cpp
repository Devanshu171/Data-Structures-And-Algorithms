// elements is self is priority

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *front = NULL;
Node *rare = NULL;

void push(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;
    if (front == NULL)
    {
        rare = front = t;
    }
    else if (t->data > front->data)
    {
        t->next = front;
        front = t;
    }

    else
    {
        Node *k = front;
        while (k->next != NULL && t->data < k->next->data)
            k = k->next;

        if (k->next != NULL)
        {
            t->next = k->next;
            k->next = t;
        }
        else
        {
            rare->next = t;
            rare = t;
        }
    }
}

void pop()
{
    if (front != NULL)
    {
        Node *t = front;
        while (t->next != rare)
            t = t->next;
        delete rare;
        t->next = NULL;
        rare = t;
    }
}
void display()
{
    Node *t = front;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}
int main()
{
    push(1);
    push(3);
    push(5);
    push(4);
    push(9);
    push(0);
    pop();
    pop();
    pop();
    display();
    return 0;
}