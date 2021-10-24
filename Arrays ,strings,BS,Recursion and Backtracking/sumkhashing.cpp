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
    int a[]={1,3,4,5,6,8,9,10,12,14};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=10;
    int h=max(a,n);
    int *b=new int[h+1];
    for(int i=0;i<h;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        
        if(a[i]<sum)
        {int x=sum-a[i];
        if(b[x]>0 )
        cout<<"("<<a[i]<<","<<x<<")"<<" ";
        }
        b[a[i]]++;
        
    }

    return 0;
}