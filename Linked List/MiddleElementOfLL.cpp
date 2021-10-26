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

int FindMiddle(Node *k) // middle element 2 scans counitng method tc->O(n)
{
    int n = 0;

    while (k != NULL)
    {
        n++;
        k = k->next;
    }
    k = P;

    int ind = 1;
    while (ind != n / 2)
    {
        ind++;
        k = k->next;
    }
    return k->data;
}
// single scan slow pointer , fast pointer method tc->O(n)
int FindMidd(Node *k)
{
    Node *q = k;

    while (k != NULL)
    {
        k = k->next;
        if (k != NULL)
            k = k->next;
        if (k != NULL)
            q = q->next;
    }
    return q->data;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    Create(a, 8);
    cout << FindMiddle(P);
    cout << FindMidd(P);
    return 0;
}