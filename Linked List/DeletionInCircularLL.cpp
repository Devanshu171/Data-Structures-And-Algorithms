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
    temp->next = P;
}
void Display(Node *k)
{
    do
    {
        cout << k->data << " ";
        k = k->next;
    } while (k != P);
    cout << endl;
}

void Delete(Node *k, int n)
{
    if (P == NULL)
        return;
    Node *q = k;

    if (n == 1)
    {
        while (k->next != P)
        {
            k = k->next;
        }
        if (k->next == k) // if only one node is present
        {
            delete k;
            P = NULL;
            return;
        }
        P = P->next;
        k->next = P;
        delete q;
        return;
    }

    int ind = 1;

    while (ind != n)
    {
        ind++;
        q = k;
        k = k->next;
    }
    q->next = k->next;
    delete k;
    return;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    Create(a, 6);
    Display(P);
    Delete(P, 6);
    Display(P);
    return 0;
}