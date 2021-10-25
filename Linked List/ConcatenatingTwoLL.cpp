#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *P = NULL;
Node *S = NULL;

void create(int a[], int n)
{
    Node *temp, *last;
    P = new Node;
    P->data = a[0];
    P->next = NULL;
    last = P;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void create2(int a[], int n)
{
    Node *temp, *last;
    S = new Node;
    S->data = a[0];
    S->next = NULL;
    last = S;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
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

void concatinate(Node *k)
{
    Node *q = NULL;
    while (k != NULL)
    {
        q = k;
        k = k->next;
    }
    q->next = S;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {7, 8, 9, 10, 11, 12};
    create(a, 6);
    create2(b, 6);
    display(P);
    display(S);
    concatinate(P);
    display(P);
    return 0;
}