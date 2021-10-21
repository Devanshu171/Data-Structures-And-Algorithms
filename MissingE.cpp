#include<iostream>
using namespace std;
int me(int A[],int n)
{
    int l=A[0];
    int h=A[n-1];
    int diff=l-0;
    int x;
    for(int i=0 ;i<n;i++)
    {
        if(A[i]-i!=diff)
            return diff+i;
    }
}
int main(){
        int A[]={1,2,3,4,5,6,7,9,11};
            int n=sizeof(A)/sizeof(A[0]);

        cout<<"Missing elements : "<< me(A,n);
   
    return 0;
}