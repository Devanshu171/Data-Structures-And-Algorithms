// Inserting at middle ,last and head

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *P = NULL;

void Create(int a[], int n) // creatign a linked list
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
int len(Node *k)
{
    int length = 0;
    while (k != NULL)
    {
        length++;
        k = k->next;
    }
    return length;
}
void insert(Node *k, int n, int x)
{
    Node *l; // creating a new node that need to be inserted
    l = new Node;
    l->data = x;
    l->next = NULL;
    int ind = 0;

    if (n == 1) // inserting a head
    {
        l->next = P; // make node l pointing to p and p pointing to l
        P = l;
        return;
    }
    else if (n == len(P)) // inseting at tail of LL
    {

        while (k != NULL)
        {
            ind++;
            if (ind == n)
            {
                k->next = l; // just make last node point to l
                return;
            }
            k = k->next;
        }
    }
    else
    {
        while (k != NULL) // inserting in b/w
        {
            ind++;
            if (ind == n - 1)
            {
                l->next = k->next; // K pointing to 1 node back to the insereting position
                k->next = l;       //  make new node point to the node k was pointing and make k point to new node
                return;
            }
            k = k->next;
        }
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
int main()
{
    int a[] = {1, 2, 3, 5, 6};
    Create(a, 5);
    display(P);
    insert(P, len(P), 10000);
    display(P);
    return 0;
}