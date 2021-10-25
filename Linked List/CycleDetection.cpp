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

void Display(Node *k){
    while(k!=NULL){
        cout<<k->data<<" -> ";
        k=k->next;
    }
    cout<<endl;
}
// creating a cycle in list
void MakeCycle(Node *k, int n)
{
    Node *start = k;
    int ind = 0;
    while (k->next!= NULL)
    {
        ind++;
        if (ind == n)
        {
            start = k;
        }
        
        k = k->next;
    }
    k->next = start;
}

bool CheckCycle(Node *k)
{
    Node *q = k;

    while (k != NULL && k->next != NULL)
    {
        q = q->next;
        k = k->next->next;

        if (k == q)
            return true;
    }
    return false;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 7};
    Create(a, 6);
    MakeCycle(P, 7);
    // Display(P);
    cout << CheckCycle(P);
    return 0;
}