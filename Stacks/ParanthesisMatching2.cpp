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
    t->data = x;
    t->next = top;
    top = t;
}
char pop()
{

    Node *t = top;
    top = top->next;
    char x = t->data;
    delete t;
    return x;
}

bool Checkparanthesis(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            push(s[i]);
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {

            char a = pop();
            if (s[i] == ')')
            {
                if (a != '(')
                    return false;
            }
            else if (s[i] == ']')
            {
                if (a != '[')
                    return false;
            }
            else
            {
                if (a != '{')
                    return false;
            }
        }
    }
    if (top == NULL)
        return true;
    else
        return false;
}

void display()
{
    Node *t = top;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
int main()
{
    string s;
    cin >> s;

    cout << Checkparanthesis(s);

    return 0;
}