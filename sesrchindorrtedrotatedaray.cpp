// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int bs(int start, int end, int k, int a[])
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (a[mid] == k)
            return mid;

        else if (a[mid] > k)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
bool search1(int a[], int l, int h, int key)
{
    // complete the function here

    if (a[l] < a[h])
        return bs(l, h, key, a);
    int n = h;

    while(l!=h && a[l]==a[h] ) h--;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        int v=a[mid];
        if (a[mid] > a[mid + 1])
        {
            int first = bs(0, mid, key, a);
            if (first != -1)
                return true;
            int second = bs(mid + 1, n, key, a);
            if(second!=-1)
            return true;
        }

        else if (a[mid] < a[l])
            h = mid - 1;
           

        else if (a[mid] >= a[l])
            l = mid + 1;
    }
    return false;
}
// { Driver Code Starts.
int main()
{

    int n = 7;

    int A[7] = {2, 5, 6, 0, 0, 1, 2};

    int key = 3;

    cout << search1(A, 0, n - 1, key);

    return 0;
} // } Driver Code Ends