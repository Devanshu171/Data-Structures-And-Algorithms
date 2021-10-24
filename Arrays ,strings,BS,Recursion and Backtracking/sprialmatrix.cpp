#include<iostream>
using namespace std;
#include<vector>
vector<int> spiral(vector<vector<int>>A,int n,int m)
{   
    vector<int> arr;
    int t=0;
    int b=n-1;
    int l=0;
    int r=m-1;
    int dir=0;
    int index=0;
    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
            {
                arr[index++]=A[t][i];
                
            }
            dir=1;
            t++;

        }
       else if(dir==1)
        {
            for(int i=t;i<=b;i++)
            {
                arr[index++]=A[i][r];
                
            }
            dir=2;
            r--;

        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
            {
                arr[index++]=A[b][i];
                
            }
            dir=3;
            b--;

        }
       else if(dir==3)
        {
            for(int i=b;i>=t;i--)
            {
                arr[index++]=A[i][l];
                
            }
            dir=0;
            l++;
        }
    }
    return arr;
}

int main()
{   
    vector< vector<int>> arr
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11}
    };
    int n=arr.size();
    int m=arr[0].size();
    // cout<<m<<" "<<n;
     
     for( auto x:spiral(arr,n,m))
     {
         cout<<x<<" ";
     }
    
    return 0;
}