#include <iostream>
using namespace std;
struct Node
{
    char data;
    Node *next;
};
Node *top = NULL;
void push(char x)
{
    Node *t = new Node;
    t->data = 'x';
    t->next = top;
    top = t;
}
void pop()
{
    Node *t = top;
    top = top->next;
    delete t;
}

void CheckParanthesis(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            push('(');
        else if (s[i] == ')')
            pop();
    }
    if (top == NULL)
        cout << "Matching" << endl;
    else
        cout << "Not Matching" << endl;
}
int main()
{
    string s;
    cin >> s;
    CheckParanthesis(s);
    return 0;
}