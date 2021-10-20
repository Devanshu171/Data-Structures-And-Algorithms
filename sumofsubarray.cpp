#include<iostream>
using namespace std;
int maxsubarray(int a[],int n) // brute force O(n^3) 
{
  int  maxsum=a[0];
  for(int i=0;i<n;i++)
  {
      int sum=0;
      for(int j=i;j<n;j++)
      {
          for(int k=j;k<j+1;k++)
          {
              sum+=a[k];
          }
          if(sum>maxsum)
            maxsum=sum;
      }
  }
        return maxsum;
}

int maxsubarray1(int a[],int n) // brute force O(n^2) 
{
  int  maxsum=a[0];
  for(int i=0;i<n;i++)
  {
      int sum=0;
      for(int j=i;j<n;j++)
      {  sum+=a[j];
          
          if(sum>maxsum)
            maxsum=sum;
      }
  }
        return maxsum;
}

int maxsubarray2(int a[],int n) // O(n) kedan's algorithm
{
    int sum=0;
    int maxsum=a[0];
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>maxsum)
        maxsum=sum;

        if(sum<0)
            sum=0;
    }
    return maxsum;
}
int main()
{
    int a[]={-1,-3,-2,-2,0};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxsubarray2(a,n);
    return 0;
}