#include<iostream>
#include<algorithm>
using namespace std;
    // first method
int majority(int a[],int n)   //O(n^2)
{
    int majoirty=-1;
    for(int i=0;i<n;i++)
    {
        int count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            count++;

        }
        if(count>n/2)
        majoirty=a[i];
    }
    return majoirty;
}

int Majority2(int a[],int n) /// using sorting O(nlogn)
{    int i=0;
    int j=i+1;
     int majority =-1;
     int count=1;

    while(i<n-1)
    {
        
        if(a[i]==a[j])
        {
            count++;
            j++;
        }
        else if(a[i]!=a[j])
        {
            i++;
        count=1;
        }

        if(count>n/2)
        majority=a[i];


    }
        return majority;
}

void FM(int a[],int n)
{
    int count=1;
    int m=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[m])
        count++;
        else
        count--;

        if(count==0)
        {
            m=i;
            count=1;
        }   
    }
    int count1=0;
        for(int i=0;i<n;i++)
        { 
            if(a[i]==a[m]);
            count1++;
            
        }
        if(count1>n/2)
        cout<<a[m];
        else
        cout<<"No majority element"<<'\n';
}








int main(){
    int a[]={1,1,2,6,3,1,1,1};
    int n=sizeof(a)/sizeof(a[0]);
    //    sort(a,a+n);
       
//    cout<< Majority2(a,n);
   FM(a,n);
    return 0;
}