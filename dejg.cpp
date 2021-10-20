#include<iostream>
using namespace std;

int main(){
    int a[]={9,3,6,12,4,32};
    int n=sizeof(a)/sizeof(a[0]);
        for(int i=0,j=1;j<n-1;i+=2,j+=2)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    return 0;
}