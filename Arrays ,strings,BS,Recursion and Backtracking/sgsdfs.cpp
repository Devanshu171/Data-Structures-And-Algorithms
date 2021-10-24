#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n=4;
    int Arr[n]={100,200,300,400};
    int i = 0, j = 0, count = 0;
    int maxsum = -10000000;
    int k=2;

    while (j < n && i <= n - k)
    {
        int sum + = Arr[j];
        count++;
        if (count == k)
        {
            maxsum = max(sum, maxsum);
            count--;
            sum -= Arr[i];
            i++;
    
        }
            j++;
    }
  cout<<maxsum;

    return 0;
}