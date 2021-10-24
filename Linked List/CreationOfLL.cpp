#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node *P = NULL; // global variable,can be accessed for anywhere
// empty list as poniting to NUll

// Creating first node or head node  and for rest will create by itrating through array using for loop
void Create(int a[], int n)
{
    Node *temp, *last; // temporary pointer
    // and a pointer last which will be pointing to the last node
    // As the linked list is empty right now we will create a new node

    P = new Node; // P is pointing to our head node , will leave P alone after this as P should always be pointing to head/fist node
    P->data = a[0];
    P->next = NULL; // as this is first node so is pointing to null
    last = P;       // as it is the only node so last = P as well

    // creation of first node  is complete

    // now for rest of the nodes

    for (int i = 1; i < n; i++)
    {
        temp = new Node; // creating new node using temp pointer not P, because P should always be
                         // pointing to head node or first node
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

// TC->O(n)
void Display(Node *t)
{

    while (t != NULL) // travers till pointer is pointing to NULL i.e that is our last node
    {
        cout << t->data << " "; // print data
        t = t->next;            // move pointer to the next node
    }
}

// Recursive functoin for display
// TC->O(n)
void RDisplay(Node *t)
{

    if (t == NULL) // base condition
        return;

    cout << t->data << " "; // print
    RDisplay(t->next);      // reducing the input
    // cout << t->data << " "; // for printing in revers order
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    Create(a, 6);

    // Display(P);
    RDisplay(P); // Recursive diaplay

    return 0;
}