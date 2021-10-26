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
    P->next = NULL;
    P->prev = NULL;
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
// void RDisplay(Node *k)
// {
//     while (k->next != NULL)
//     {
//         k = k->next;
//     }

//     while(k->prev!=NULL)
//     {
//         cout<<k->data<<" ";
//         k=k->prev;
//     }
//     cout << endl;
// }

int Count(Node *k)
{
    int count = 0;
    while (k != NULL)
    {
        count++;
        k = k->next;
    }
    return count;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    Create(a, 9);
    // RDisplay(P);
    cout << Count(P);

    return 0;
}