#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{   int a[]={10,15,-5,15,-10,5};
    int n=6;
    int sum=0;
    int target=5;
    // for(int i=0;i<n;i++)
    // {   sum=a[i];
       
    //     if(sum==target)
    //     {
    //         cout<<i<<endl;
    //     }
    //     for(int j=i+1;j<n;j++)
    //     {
    //         sum+=a[j];

    //         if(sum==target)
    //             {
    //                 cout<<i<<" , "<<j<<endl;
                
    //             }
    //     }
    //     sum-=a[i];
    // }
    int start=0;
    int end=-1;
    int cursum=0;
    unordered_map<int,int>mpp;

    for(int i=0;i<n;i++)
    {
        cursum+=a[i];
        if(cursum-sum==0)
        {
            start=0;
            end=i;
            break;
        }
        if(mpp.find(cursum-sum)!=mpp.end())
        {
            start=mpp[cursum-sum]+1;
            end=i;
            cout<<start<<","<<end;
        }
        mpp[cursum]=i;
    }
    if(end==-1)
    cout<<"subarray not fount"<<endl;

    // else
    // cout<<start<<" , "<<end<<endl;

    
    return 0;
}