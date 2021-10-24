#include<iostream>
using namespace std;
int lm(int arr[], int n)
{
    int i = 1;
    
    int ans = 0;
    while (i < n - 1)
    {
        int count = 1;
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            int j = i;
            while (arr[j] > arr[j - 1] && j > 0)
            {
                j--;
                count++;
            }
            while (arr[i] > arr[i + 1] && i < n - 1)
            {
                i++;
                count++;
            }
            ans = max(count, ans);
        }
        else
            i++;
    }

    return ans;
}
int main(){
    int a[] = {0, 1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
    int n=11;

    cout<<lm(a,n);
    return 0;
}

