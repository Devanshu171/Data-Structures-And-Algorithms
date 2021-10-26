#include <iostream>
using namespace std;
struct Node
{
    Node *prev;
    int data;
    Node *next;
};
Node *P = NULL;

void Create(int a[], int n)
{

    Node *temp, *last;
    P = new Node;
    P->data = a[0];
    P->next = P->prev = NULL;
    last = P;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
    temp->next = P;
    P->prev = temp;
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

void Insert(Node *k, int n, int x)
{
    Node *temp = new Node;
    temp->data = x;

    if (P == NULL)
    {
        P = temp;
        temp->next = temp->prev = P;
        return;
    }

    else if (n == 0)
    {
        if (k->next == k)
        { // k is the only node present in ll.
            temp->next = temp->prev = k;
            k->next = k->prev = temp;
            return;
        }
        else
        {

            k->prev->next = temp;
            temp->prev = k->prev;
            temp->next = k;
            k->prev = temp;
            P=temp;
            return;
        }
    }
    else
    {
        int ind = 1;
        while (ind != n)
        {
            ind++;
            k = k->next;
        }
        temp->next = k->next;
        temp->prev = k;
        k->next = temp;
        k = temp->next;
        k->prev = temp;
        return;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    Create(a, 5);
    Insert(P, 5, 6);
    
    Display(P);
    return 0;
}