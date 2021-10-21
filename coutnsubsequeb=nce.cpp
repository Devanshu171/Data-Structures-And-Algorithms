#include<iostream>
#include<vector>
using namespace std;
int helper(int a[],int i,int n,int k ,int sum)
{       
        if(i==n)
        {
            if(sum==k)
           return 1;

           else
            return 0;
            
        }

        else
        sum+=a[i];
        // vec.push_back(a[i]);
       int l= helper(a,i+1,n,k,sum);
        sum-=a[i];
        // vec.pop_back();
       int r= helper(a, i + 1, n, k, sum);
       return l+r;
}
int subseq(int a[],int n,int k)
{   int sum=0;
   
  int l= helper(a,0, n,k,sum);
  return l;

}
int main(){
    int a[]={1,5,2,4,5};
    int n=5;
    int k=6;
    cout<<subseq(a,n,k);
    return 0;
}