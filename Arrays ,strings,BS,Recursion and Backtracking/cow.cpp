#include <iostream>
#include <algorithm>
using namespace std;

bool isvalid(int a[], int n, int c, int mx)
{
    int count = 1;
    // int j = 1;
    int i = 0;
    for(int j=1;j<n;j++)
    {
        if (abs(a[i] - a[j]) >= mx)
        {
            count++;
            i = j;
            
        }
		

    }
    if (count >= c)
        return true;

    return false;
}
int mindis(int a[], int n, int c)
{
    
    int res = -1;
    if (c > n)
        return res;
    

    int start = a[0];
    int end = a[n-1] - a[0];

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isvalid(a, n, c, mid))
        {
            res = mid;
            start = mid + 1;
        }

        else
            end = mid - 1;
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);

        cout << mindis(a, n, c);
    }
    return 0;
}