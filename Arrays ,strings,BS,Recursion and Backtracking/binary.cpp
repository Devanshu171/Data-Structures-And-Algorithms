#include<iostream>
using namespace std;
int bs(int a[],int n,int k)
{
    bool ace=true;

    if(n>=2)
    {
        if(a[0]>a[1])
        ace=false;
    }

    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(a[mid]==k)
        return mid;

        else if(a[mid]<k)
        {
            if(ace)
            start=mid+1;
            else
            end=mid-1;
        }

        else{
            if(ace)
            end=mid-1;
            else
            start=mid+1;
        }

    }
    return -1;

}
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;
    cout<<bs(a,n,k);
    return 0;
}