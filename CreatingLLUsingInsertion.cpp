#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *P = NULL;
Node *last = NULL;
bool first = true;
void insert(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (first)
    {
        P = temp;
        last = P;
    }
    last->next = temp;
    last = temp;
    first = false;
}
void display(Node *k)
{
    while (k != NULL)
    {
        cout << k->data << " ";
        k = k->next;
    }
    cout << endl;
}
int main()
{

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
   
    display(P);
    return 0;
}