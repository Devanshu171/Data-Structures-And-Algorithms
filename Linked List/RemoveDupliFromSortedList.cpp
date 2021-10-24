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
}

void RemoveDupliate(Node *k)
{
    Node *q = k;
    k = k->next;

    while (k != NULL)
    {

        if (q->data != k->data)
        {
            q = k;
            k = k->next;
        }

        else
        {
            q->next = k->next;
            delete k;
            k = q->next;
        }
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
int main()
{
    int a[] = {1, 2, 3, 4, 4, 5, 6, 8, 4, 5, 5, 5, 5, 55, 5, 5, 5, 5, 9, 9, 8};
    Create(a, 21);
    RemoveDupliate(P);
    Display(P);

    return 0;
}