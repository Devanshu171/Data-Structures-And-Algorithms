#include<iostream>
using namespace std;
void PairSum(int a[],int n,int k) // Only for sorted array
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<"("<<a[i]<<","<<a[j]<<")"<<'\n';
            }
        }
    }
}
void abcd(int a[],int n,int k)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
       { cout<<a[i]<<","<<a[j]<<endl;
        i++;
        j--;}
        else if(a[i]+a[j]<k)
        {  
            i++;

        }
        else j--;
    }
}
int main()
{   
    int a[8]={1,2,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    // PairSum(a,n,10);
    abcd(a,n,10);
    return 0;
}