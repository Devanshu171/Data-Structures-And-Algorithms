#include <iostream>
#include <stack>
using namespace std;
void reverse(string &s){
    int n=s.size();
    for(int i=0,j=n-1;i<j;i++,j--){
            swap(s[i],s[j]);
    }
}
int prec(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else if (x == '^')
        return 3;
    else
        return -1;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string ans = "";
    // reverse(s);
    
            
    for (int i = s.size()-1; i >=0; i--)
    {

        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            ans = s[i]+ans;

        else if (s[i] == ')')
            st.push(s[i]);

        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {

            while (!st.empty() && prec(s[i]) < prec(st.top()))
            {
                ans = st.top()+ans;
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        ans = st.top() + ans;
        st.pop();
    }
    // reverse(ans);
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << infixToPostfix(s);
    return 0;
}