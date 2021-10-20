#include<iostream>
using namespace std;
int maxmin(int a[],int n)
{   int max=a[0];
    int min=a[0];
    int i;
    for( i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
      else if(min>a[i])
        min=a[i];
       }
    cout<<"max:"<< max<<'\n';
    cout<<"min:"<< min;
}
int main(){
    int a[]={1,2,3,4,9,-4,3,4,88,3};
    int n=sizeof(a)/sizeof(a[0]);
    maxmin(a,n);
    return 0;
}