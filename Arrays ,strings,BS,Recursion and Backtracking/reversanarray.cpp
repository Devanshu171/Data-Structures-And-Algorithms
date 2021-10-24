#include<iostream>
using namespace std;
void revers(int a[],int i,int n)
{
    if(i>=n/2)
    return;

    else{
        swap(a[i],a[n-i-1]);
        revers(a,i+1,n);
    }
}
int main(){
    int n=7;
    int a[]={1,2,3,4,5,6,7};
    revers(a,0, n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}