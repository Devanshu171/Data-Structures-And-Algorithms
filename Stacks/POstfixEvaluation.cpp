#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int PostfixSolver(string str);
int main()
{
    string str;
    getline(cin, str);
    cout << PostfixSolver(str) << endl;
    return 0;
}
int PostfixSolver(string str)
{
    int o1, o2, sum = 0;
    stack<int> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            sum = sum * 10 + (str[i] - '0');
        }
        else if (str[i] == ' ')
        {
            s.push(sum);
            sum = 0;
        }
        else
        {
            o2 = s.top();
            s.pop();
            o1 = s.top();
            s.pop();
            switch (str[i])
            {
            case '+':
                s.push(o1 + o2);
                break;
            case '-':
                s.push(o1 - o2);
                break;
            case '*':
                s.push(o1 * o2);
                break;
            case '/':
                s.push(o1 / o2);
                break;
            case '^':
                s.push(pow(o1, o2));
                break;
            }
            i++;
        }
    }
    return s.top();
}
