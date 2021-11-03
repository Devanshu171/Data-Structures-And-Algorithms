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
        front = rare = t;
    }
    else
    {
        rare->next = t;
        rare = t;
    }
}
void pop(){
    if(front!=NULL){
        Node*t=front;
        front=front->next;
        delete t;
    }
}
void first(){
    if(front!=NULL){
    cout<< front->data<<endl;
    }
    else
    cout<<"empty queue"<<endl;
}
void last(){
    if(front!=NULL)
    cout<< rare->data<<endl;
    else
    cout<<"empty queue"<<endl;
}
bool isFull(){
    Node *t=new Node;
    if(t==NULL)
    return true;
    else
    return false;
}
bool isEmpty(){
    if(front==NULL)
    return true;
    else return false;
}
void display(){
    Node *t=front;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();
    first();
    last();
    cout<<isFull()<<endl;
    cout<<isEmpty()<<endl;

    return 0;
}