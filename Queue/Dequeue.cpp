#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *front = NULL;
Node *rare = NULL;

void pushrare(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (front == NULL)
    {
        front = rare = t;
    }
    else
    {
        rare->next = t;
        rare = t;
    }
}
void pushfront(int x)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (front == NULL)
    {
        front = rare = t;
    }
    else
    {
        t->next=front;
       front=t;
    }
}
void popfront()
{
    if (front != NULL)
    {
        Node *t = front;
        front = front->next;
        delete t;
    }
}
void poprare()
{
    if (front != NULL)
    {
        Node *t = front;
        while(t->next!=rare) t=t->next;
        delete rare;
        rare=t;
        rare->next=NULL;
       
    }
}
void first()
{
    if (front != NULL)
    {
        cout << front->data << endl;
    }
    else
        cout << "empty queue" << endl;
}
void last()
{
    if (front != NULL)
        cout << rare->data << endl;
    else
        cout << "empty queue" << endl;
}
bool isFull()
{
    Node *t = new Node;
    if (t == NULL)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if (front == NULL)
        return true;
    else
        return false;
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
   
    pushrare(1);
    pushrare(2);
    pushrare(3);
    pushrare(4);
    popfront();
    display();
    // pushfront(0);
    // pushfront(-1);
    poprare();
display();
    return 0;
}