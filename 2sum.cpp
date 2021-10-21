#include<iostream>
using namespace std;
void sum2(int nums[],int n,int target)
 {  
     
     int index=0;
        int ans[2];
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(nums[i]+nums[j]==target)
            {
               cout<<i<<" ,"<<j<<endl;
               i++;
               j--;
            }
            else if(nums[i]+nums[j]<target)
                    i++;
            else
                    j--;
        }
        
        }
int main(){
    int a[]={1,2,5,7,8,11};
    int n=sizeof(a)/sizeof(a[0]);
    int target=13;
    sum2(a,n,target);
    return 0;
}