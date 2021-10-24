#include<iostream>
using namespace std;

int main()
{
    int n=8;
    int a[n]={1,3,-1,-3,5,3,6,7};
    int k=3;
    int b[n-k+1];
   int index=0;
    for(int i=0;i<n-k+1;i++)
    {
        int max = a[i];
        for(int j=i;j<i+k;j++)
        {   
            if(a[j]>max)
            max=a[j];
        }
        b[index++]=max;
    }
    
    for(int i=0;i<n-k+1;i++)
        cout<<b[i]<<" ";
    return 0;
}