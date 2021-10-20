#include<iostream>
using namespace std;
void MultiMissing(int a[],int n)
{
    int diff=a[0]-0;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]-i!=diff)
        {
           while(diff<a[i]-i)
            {
                cout<<diff+i<<" ";
                 diff++;
            }
        }
        
    }
}
int main(){
    int A[]={1,2,3,4,6,8,9,10,12,15,16,17,18};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"Missing elements are"<<'\n';
    MultiMissing(A,n);
    return 0;
}