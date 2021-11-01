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
void Display(Node *k)
{
    while (k != NULL)
    {
        cout << k->data << " -> ";
        k = k->next;
    }
    cout << endl;
}

void deleteDuplicates(Node *head)
{
    Node *k = head, *pre, *newhead = head;
    if (head == NULL || head->next == NULL)
        return;

    while (k != NULL)
    {
        if (k->next != NULL && k->data == k->next->data)
        {
            while (k->next != NULL && k->data == k->next->data)
            {
                Node *del = k->next;
                k->next = del->next;
                delete del;
            }

            if (k == head)
            {
                newhead = k->next;
                delete k;
                k = newhead;
            }
            else
            {
                pre->next = k->next;
                delete k;
                k = pre;
                // pre=k;
                k=k->next;
            }
            pre=k;
        }

       
    }
    P=newhead;
}

int main()
{
    int a[] = {1, 1, 3, 3, 4, 4, 5};
    Create(a, 7);
    // cout<<sum(P);
    Display(P);
    deleteDuplicates(P);
    Display(P);

    return 0;
}