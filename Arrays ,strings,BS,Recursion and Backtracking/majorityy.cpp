#include<iostream>
using namespace std;
int max(int a[],int n)
{   int max=a[0];
    int j,i;
    for( i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
int main(){
    int a[]={1,2,2};
    int n=sizeof(a)/sizeof(a[0]);
   int h=max(a,n);
    int *b=new int[h+1];
    for(int i=0;i<=h;i++)
        b[i]=0;
    for(int i=0;i<n;i++)
        b[a[i]]++;
        for(int i=0;i<=h;i++)
        {
            if(b[i]>n/2)
                cout<<i;
                
        }
    return 0;
}