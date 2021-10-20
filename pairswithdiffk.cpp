#include<iostream>
using namespace std;

int pairCount(int a[],int n,int k)
{
    int i=0;
    int j=1;
    int ans=0;
    while(i<n || j<n)
    {
        int diff=a[j]-a[i];

        if(diff>k){
         j++; i++;
        }
        else if(diff<k) 
        j++;

        else
        { 
            if(a[i]!=a[j])
            {
                int c1=1;
                int c2=1;
                while(a[i]==a[i+1]) 
                {i++; c1++;}
                while(a[j]==a[j+1])
                 {j++; c2++;}

                ans+=c1*c2;
                i++;
                j++;
            }
            else
            {
               int c3=2;
                while(a[i]!=a[j] && j<n) j++;c3++;
                ans+=c3*(c3-1)/2;
                i=j-1;

            }



        }
    }
    return  ans;
}


int main()
{   int n=9;
    int k=1;
    int a[n]={1, 2,3,4,5,6,7,8,9};

   cout<< pairCount(a,n,k);
    
    
    return 0;
}