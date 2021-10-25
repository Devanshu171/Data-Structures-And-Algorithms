#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *P = NULL;

// creating circular linked list
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
    last->next = P; // just link last node with head and we have a circular linked list
}
// old display function
void Display(Node *k)
{
    while (k != NULL)
    {
        cout << k->data << " -> ";
        k = k->next;
    }
    cout << endl;
}
// we print till k is not pointing to P(head) we use do while loop as k is initially pointing to P
void CDisplay(Node *k)
{
    do
    {
        cout << k->data << " -> ";
        k = k->next;
    } while (k != P);

    cout << endl;
}
// Recursive function to diaplay a C.L.l
void RCDisplay(Node *k)
{
    static bool flag = false;  
    if (k == P && flag == true)
        return;
    flag = true;
    cout << k->data << " -> ";
    RCDisplay(k = k->next);
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    Create(a, 8);
    // Display(P); // old display function to check if list is circular
    CDisplay(P);
    RCDisplay(P);
    return 0;
}