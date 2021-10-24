#include <iostream>
using namespace std;

int main()
{
    // Write your code here.
    int n = 4;
    int m = 2;
    int a[n][m] = { 
                    {1, 2}, 
                    {3, 2},
                   { 8, 3},
                    {3 ,4}};

    int t = 0, b = n - 1, l = 0, r = m - 1;
    int count = 0;
    int dir = 0, k = 7;

    while (t <= b && l <= r)
    {
        if (dir == 0)
        {

            for (int i = t; i <= r; i++)
            {
                count++;
                if (count == k)
                {
                    cout << a[t][i];
                    return 0;
                }
            }
            t++;
            dir = 1;
        }
        else if (dir == 1)
        {

            for (int i = t; i <= b; i++)
            {
                count++;
                if (count == k)
                {
                    cout << a[i][r];
                    return 0;
                }
            }
            r--;
            dir = 2;
        }
        else if (dir == 2)
        {

            for (int i = r; i >= l; i--)
            {
                count++;
                if (count == k)
                {
                    cout << a[b][i];
                    return 0;
                }
            }
            b--;
            dir = 3;
        }
        else if (dir == 3)
        {

            for (int i = b; i >= t; i--)
            {
                count++;
                if (count == k)
                {
                    cout << a[i][l];
                    return 0;
                }
            }
            l--;
            dir = 0;
        }
    }

    return 0;
}