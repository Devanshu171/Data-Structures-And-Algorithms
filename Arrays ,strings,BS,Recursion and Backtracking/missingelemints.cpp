#include<iostream>
using namespace std;

int max(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
}
int min(int a[],int n)
{
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
}
void FindMissing(int a[],int n)
{
   
   int sum=n*(n+1)/2;
   int sum1=0;
   for (int i=0;i<n;i++)
   {
       sum1+=a[i];
   }
   cout<<sum-sum1;
}
int FindMissing1(int a[],int n)//// for single missing element
{
    
    int diff=a[0]-0;
    for(int i=0;i<n;i++)
    {
        if(a[i]-i!=diff)
        return diff+i;
            }
       

}

void FindMissing2(int a[],int n)
{
    int diff=a[0];
    for(int i=1;i<n;i++)
    {
        if(diff!=a[i]-i)
        {
            while(diff<a[i]-i){
            cout<<diff+i<<'\n';
        diff++;}
        }
    }


}

void FindMissing3(int a[],int n )
{
    int l=min(a,n);
    int h=max(a,n);
    int *B=new int[h];
    for(int i=l;i<=h;i++)
    {
        B[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        B[a[i]]++;
    }
    for(int i=l;i<=h;i++)
    {
        if(B[i]==0)
        cout<<i<<" ";
    }
}
int main(){
    int a[5]={12,13,14,17,19};
    int n=sizeof(a)/sizeof(a[0]);
    // FindMissing(a,n);
    // cout<<max(a,n);
//    cout<< FindMissing1(a,n);
cout<<"Missing elements are: "<<endl;
// FindMissing2(a,n);
FindMissing3(a,n);
    return 0;
}