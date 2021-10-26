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

void Delete(Node *k, int n)
{
    if (P == NULL) // empty list
        return;

    else if (n == 1)
    {
        Node *q = P;
        P = P->next;
        if (P != NULL)   // in case P was only node in ll
            P->prev = NULL;
        delete q;
        return;
    }

    else
    {
        int ind = 0;
        while (k != NULL)
        {
            ind++;
            if (ind == n)
            {
                k->prev->next = k->next;
                if (k->next != NULL)  //k was last/tail node 
                {
                    k->next->prev = k->prev;
                }
                delete k;
            }
            k = k->next;
        }
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    Create(a, 6);
    Display(P);
    Delete(P, 1);
    Delete(P, 1);
    Delete(P, 1);
    Delete(P, 1);
    Display(P);

    return 0;
}