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
}

void Display(Node *k)
{
    while (k != NULL)
    {
        cout << k->data << " ";
        k = k->next;
    }
    cout << endl;
}
// revers by swaping values
void Revers(Node *k)
{
    Node *q = k, *l;

    while (k->next != NULL)
    {
        k = k->next;
    }

    while (l != k)
    {
        swap(k->data, q->data);
        l = q;
        q = q->next;
        k = k->prev;
    }
}
// previous will be pointing to next and next will be pointing to prev
void Revers1(Node *k)
{
    Node *temp;
    while (k != NULL)
    {
        temp = k->next;
        k->next = k->prev;
        k->prev = temp;
        k = k->prev;
        if (k != NULL && k->next == NULL) // pointing p to last / new head pointer
            P = k;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    Create(a, 8);
    Display(P);
    Revers1(P);
    // Revers(P);
    Display(P);

    return 0;
}