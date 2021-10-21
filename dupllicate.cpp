#include<iostream>
using namespace std;

int main(){
    int a[]={3,6,8,8,10,12,15,15,15,20};
    int ld=0;
    for(int i=0;i<=sizeof(a)/sizeof(a[0]);i++)
    {
        if(a[i]==a[i+1] && a[i]!=ld)
        {
            ld=a[i];
            cout<<a[i]<<" ";
        }
    }
    return 0;
}