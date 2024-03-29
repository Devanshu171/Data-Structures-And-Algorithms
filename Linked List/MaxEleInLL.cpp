
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

int maxElement(Node *k)
{
    int maxi = -100000;
    while (k != NULL)
    {
        maxi=max(maxi,k->data);
        k = k->next;
    }
    return maxi;
}
// recursive method
int RmaxElement(int maxi,Node *k)
{
   if(k==NULL)
   return maxi;
   maxi=max(maxi,k->data);
   RmaxElement(maxi,k=k->next);
    
}
int main()
{
    int a[] = {1,-2, 3, 4, 95, 60, 7};
    Create(a, 7);

    cout << RmaxElement(-100000,P);

    return 0;
}