#include<iostream>
using namespace std;
int max(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max) max=a[i];
    }
    return max;
}

void FindDuplicate(int a[],int n)  // for sorted array
  { 
      for(int i=0;i<n;i++)
      {
          int ld=0;
          if(a[i]==a[i+1] && a[i]!=ld)
          {
              cout<<a[i]<<endl;
              ld=a[i];
          }
      }
}
void FDC1(int a[],int n)  // for count sorted array
  { 
      for(int i=0;i<n;i++)
      {
          
          if(a[i]==a[i+1] )
          { int j=i+1;
          while(a[i]==a[j]) j++;

              cout<<a[i]<<" :"<<j-i<<'\n';
              i=j-1;
              
          }
      }
}

void USDE(int a[],int n)
{
    int h=max(a,n);
    int *B=new int[h];
    for(int i=0;i<h;i++)
    {
        B[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        B[a[i]]++;
    }

    for(int i=0; i<=h;i++)
    {
        if(B[i]>1)
        cout<<i<<" :"<<B[i]<<" times"<<'\n';

    }
}
void maxmin(int a[],int n)
{
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        else if(a[i]<min)
        min=a[i];
    }
    cout<<max<<" "<<min;
}
void sub(int a[],int n,int k)
{
    int i=0;
    int j=1;
    while (j<n-1){
        if(a[j]-a[i]==k)
        {
            cout<<a[j]<<","<<a[i]<<'\n';
            i++;
            j++;
        }
        else if(a[j]-a[i]>k)
       i++;
       else
       j++;
    }
}
int main()
{
    int a[9]={2,4,8,9,13,16,19,23,25};
    int n=sizeof(a)/sizeof(a[0]);

// USDE(a,n);
// maxmin(a,n);
sub(a,n,10);

    return 0;
}