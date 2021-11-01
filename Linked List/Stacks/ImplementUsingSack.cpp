#include <iostream>
using namespace std;
#define max 100

struct stack
{
    int size = max;
    int top = -1;
    int *S;
};

void Create(stack *st)
{
    // cout << "Enter size" << endl;
    // cin >> st->size;
    st->top = -1;
    st->S = new int[st->size - 1];
}
void Display(stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}

void push(stack *st, int x)
{
    if (st->top == st->size - 1)
        cout << "stack overflow" << endl;
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(stack *st)
{
    int x = -1;
    if (st->top == -1)
        cout << " stack underflow" << endl;
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}
void isFull(stack st)
{
    if (st.top == st.size - 1)
        cout << "Full" << endl;
    else
        cout << "Not Full" << endl;
}
void isEmpty(stack st)
{
    if (st.top == -1)
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
}
int top(stack *st)
{
    if (st->top != -1)
        return st->S[st->top];
    else
        return -1;
}
void peek(stack st,int pos){
    if(st.top+1-pos<0)
    cout<<" Invalid position"<<endl;
    else{
        cout<<st.S[st.top+1-pos]<<endl;
    }
}
int main()
{
    stack st;
    Create(&st);
    push(&st, 1);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);
    push(&st, 5);
    push(&st, 6);

    //    cout<<top(&st);
    // isEmpty(st);
    // isFull(st);
    // Display(st);
    

    return 0;
}