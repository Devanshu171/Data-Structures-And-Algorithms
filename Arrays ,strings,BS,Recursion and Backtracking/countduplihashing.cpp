#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,4,4,5,10,17,17,17,18};
    int n=sizeof(a)/sizeof(a[0]);
    int h=a[n-1];
    int *b=new int[h];
    for(int i=0;i<=h;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<h;i++)
    {
            if(b[i]>1)
            cout<<i<<" :"<<b[i]<<'\n';
    }
    
    return 0;
}