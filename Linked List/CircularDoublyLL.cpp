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
    P->prev = temp; // linked head node with tail and tail with head
    temp->next = P;
}

// old display to check circular
void Display1(Node *k)
{
    while (k != NULL)
    {
        cout << k->data << " ";
        k = k->next;
    }
    cout << endl;
}

// display
void Display(Node *k)
{
    do
    {
        cout << k->data << " ";
        k = k->next;
    } while (k != P);
    cout << endl;
}

void Insert(Node *k,int x,int n){
    Node *temp=new Node;
    temp->data=x;
    if(k->next=P){
        
    }

}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    Create(a, 6);
    Display(P);

    return 0;
}