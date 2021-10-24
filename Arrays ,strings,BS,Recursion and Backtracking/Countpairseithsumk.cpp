#include<iostream>
using namespace std;

int main()
{
    int n=9;
    int a[n]={1,4,4,5,5,5,6,6,11};

    int i=0 ,j=n-1;
    int k=10;
    int ans=0;
    while( i<=j)
    {
        int sum=a[i]+a[j];

        if(sum>k)
            j--;

        else if (sum<k)
            i++;

        else{
                i++; j--;
            int c1=1,c2=1;
            while(a[i]!=a[i-1]) c1++; i++;
            while(a[j]!=a[j+1]) c2++;j--;
            ans+=c1*c2;
        }

    }
        return ans;
    
    return 0;
}