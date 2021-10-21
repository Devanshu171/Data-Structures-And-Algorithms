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
    int h=max(a,n)+1;
    int *B=new int[h];
    for(int i=0;i<=h;i++)
    {
        B[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        B[a[i]]++;
    }
    for(int i=0;i<=h;i++)
    {
        if(B[i]>1)
        cout<<i<<" :"<<B[i]<<'\n';
    }

}

int main(){
    int a[]={8,7,6,4,6,5,6,8,2,7};
    int n=sizeof(a)/sizeof(a[0]);
   unsortmissing(a,n);
  
    
    return 0;
}