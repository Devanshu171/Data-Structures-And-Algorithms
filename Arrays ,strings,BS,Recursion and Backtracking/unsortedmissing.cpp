#include<iostream>
using namespace std;
int max(int a[],int n)
{   int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
int min(int a[],int n)
{   int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
}
int unsortmissing(int a[],int n)
{
    int l=min(a,n);
    int h=max(a,n);
    int *B=new int[h+1];
    for(int i=0;i<=l;i++)
    {
        B[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        B[a[i]]++;
    }
    for(int i=l;i<=h;i++)
    {
        if(B[i]==0)
        cout<<i<<" ";
    }

}

int main(){
    int a[]={3,7,4,9,12,6,1,11,2,10};
    int n=sizeof(a)/sizeof(a[0]);
   unsortmissing(a,n);
  
    
    return 0;
}