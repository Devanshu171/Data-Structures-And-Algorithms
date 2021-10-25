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

void Insert(Node *k, int x, int n)
{
    Node *temp = new Node;
    temp->data = x;
    int ind = 1;
    if (n < 0)
    {
        cout << "invid position" << endl;
        return;
    }
    if (n == 0)
    {

        if (P == NULL) // in case of empty list
        {
            P = temp;
            temp->next = P;
            return;
        }
        while (k->next != P)
        {
            k = k->next;
        }
        k->next = temp;
        temp->next = P;
        P = temp; // moving head is optional as its circular
        return;
    }
    while (ind != n) // moving k one node back to given position
    {
        ind++;
        k = k->next;
    }
    temp->next = k->next; // make new node point to what previous node was pointing
    k->next = temp;       // make new previous node point to new
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Create(a, 9);
    cout << "Before inserting" << endl;
    Display(P);
    Insert(P, 10, 5);
    cout << "After inserting" << endl;
    Display(P);
    return 0;
}