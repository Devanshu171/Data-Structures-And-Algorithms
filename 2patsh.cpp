#include <iostream>
using namespace std;

void paths(int i, int j, int n, int m, string s)

{
    if (i >= n || j >= m)
    {
        return;
    }
        if (i == n - 1 && j == m - 1)
        {
            cout << s<<endl;
            return;
        }

        s+="D";
         paths(i + 1, j, n, m, s);
        s.pop_back();
        s+= "R";
         paths(i, j + 1, n, m, s);
}
int main()
{
    int n = 3, m = 2;
    paths(0, 0, n, m, "");
    return 0;
}