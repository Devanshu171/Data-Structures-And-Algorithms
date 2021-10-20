#include<iostream>
using namespace std;
void insort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(a[j]<a[j-1])
            swap(a[j],a[j-1]);
            else
            break;

        }
    }
}
int main(){
    int a[]={56,-3,7,33,6,99,3,21,1};
    int n=9;
    // for(auto it:a)
    // cout<<it<<" ";

    // cout<<endl;
    insort(a,n);
    for(auto it:a)
    cout<<it<< " ";
    return 0;
}