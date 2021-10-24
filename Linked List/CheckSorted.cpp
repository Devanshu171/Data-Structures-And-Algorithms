#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *P = NULL;

void create(int a[], int n)
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

bool checkSorted(Node *k)
{
    Node *q = NULL;
    q = k;   // slow pointer
    k = k->next;  // fast pointer
    while (k != NULL)
    {

        if (q->data > k->data)           //comparing data
            return false;

        q = k;
        k = k->next;
    }
    return true;
}
int main()
{
    int a[] = {1, 2, 3, 4, 10, 20, 30, 40};
    create(a, 8);
    cout << checkSorted(P);
    return 0;
}