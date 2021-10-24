#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *P = NULL;

void Create(int a[], int n)
{
    Node *t, *last;
    P = new Node;
    P->data = a[0];
    P->next = NULL;
    last = P;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(Node *k)
{
    while (k->next != NULL)
    {
        cout << k->data << " ";
        k = k->next;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    Create(a, 7);
    display(P);
    return 0;
}