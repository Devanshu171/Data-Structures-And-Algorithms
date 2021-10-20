#include<iostream>
using namespace std;

int main()
{   int n;
    cin>>n;
int a[n];
    int index=0;
    int odd=1;
    while(odd<=n)
    {
        a[index++]=odd;
        odd+=2;
    }
    int even;
    if(n%2==0)
     even=n;
     else
     even=n-1;
    while(even>0)
    {
        a[index++]=even;
        even-=2;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    

    
    return 0;
}