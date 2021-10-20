#include<iostream>
using namespace std;
int count(int a[],int i,int n,int sum,int k)
{
    if(i==n)
    {
        if(sum%k==0 && sum!=0)
        return 1;

        else 
        return 0;
    }

    sum+=a[i];
   int l= count(a,i+1,n,sum,k);
    sum-=a[i];
    int r=count(a,i+1,n,sum,k);
    return l+r;

}
int main(){
    int a[]={3,6};
    int n=2;
    int sum=0;
    int k=3;
    cout<<count(a,0,n,sum,k);
    return 0;
}