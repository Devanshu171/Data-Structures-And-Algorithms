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
        P = P->next;
        k->next = P;
        delete q;
        return;
    }

    int ind = 0;
    while (k->next != P)
    {
        ind++;
        if (ind == n)
        {
            q->next = k->next;
            delete k;
            return;
        }
        q = k;
        k = k->next;
    }
    cout << "positon not present";
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    Create(a, 6);
    Display(P);
    Delete(P, 1);
    Display(P);
    return 0;
}