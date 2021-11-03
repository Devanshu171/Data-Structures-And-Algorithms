// code for 3 priorities


#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *front1 = NULL;
Node *front2 = NULL;
Node *front3 = NULL;
Node *rare1 = NULL;
Node *rare2 = NULL;
Node *rare3 = NULL;

void push(int x, int pri)
{
    Node *t = new Node;
    t->data = x;
    t->next = NULL;
    if (pri == 1)
    {
        if (front1 == NULL)
        {
            front1 = rare1 = t;
        }
        else
        {
            rare1->next = t;
            rare1 = t;
        }
    }
    else if (pri == 2)
    {
        if (front2 == NULL)
        {
            front2 = rare2 = t;
        }
        else
        {
            rare2->next = t;
            rare2 = t;
        }
    }
    else if (pri == 3)
    {
        if (front3 == NULL)
        {
            front3 = rare3 = t;
        }
        else
        {
            rare3->next = t;
            rare3 = t;
        }
    }
}
void pop()
{
    if (front1 != NULL)
    {
        Node *t = front1;
        front1 = front1->next;
        delete t;
    }
    else if (front2 != NULL)
    {
        Node *t = front2;
        front2 = front2->next;
        delete t;
    }
    else if (front3 != NULL)
    {
        Node *t = front3;
        front3 = front3->next;
        delete t;
    }
    else
    {
        cout << "empty queue" << endl;
    }
}

void display()
{
    Node *t = front1;

    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    t = front2;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    t=front3;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}
int main()
{
    push(1, 1);
    push(2, 2);
    push(3, 3);
    push(4, 1);
    push(5, 2);
    push(6, 3);
display();
pop();
pop();
pop();
pop();
display();
    return 0;
}