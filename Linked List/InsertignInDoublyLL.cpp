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

// insert at any given position
void Insert(Node *k, int n, int x)
{
    Node *temp = new Node;
    temp->data = x;

    if (k == NULL)
    {
        temp->next = temp->prev = NULL;
        P = temp;
        return;
    }

    else if (n == 0)
    {
        temp->next = k;
        k->prev = temp;
        P = temp;
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
                if (k->next != NULL)
                {
                    temp->next = k->next;
                    temp->prev = k;
                    k->next = temp;
                    k = temp->next;
                    k->prev = temp;
                    return;
                }
                else
                {
                    temp->next = NULL;
                    temp->prev = k;
                    k->next = temp;
                    return;
                }
            }
            k = k->next;
        }
    }
}

// only insert at tail
void Insert1(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    Node *k = P;
    if (P == NULL)
    {
        temp->prev = NULL;
        P = temp;
        return;
    }

    else
    {
        Node *l = P;
        while (k->next != NULL)
        {
            k = k->next;
        }
        temp->prev = k;
        k->next = temp;
        return;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Create(a, 10);
    Insert(P, 0, 0); // insert at any given position
    Insert1(11);     // insert at tail only
    Insert1(12);
    Insert1(13);
    Insert1(14);
    Insert1(15);
    Display(P);
    return 0;
}