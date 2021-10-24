
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

    Node *t, *last;
    P = new Node;
    P->data = a[0];
    P->next = NULL;
    last = P;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int Count(Node *k)
{
    int count = 0;
    while (k!= NULL)
    {
        count++;
        k = k->next;
    }
    return count;
}

int Rcount(int c,Node *k)
{
    if(k==NULL)
    return c;

    Rcount(c+1,k=k->next);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    Create(a, 7);

    cout << Rcount(0,P);
    return 0;

return 0;
}