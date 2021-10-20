#include<iostream>
using namespace std;

int pairCount(int a[],int n,int k)
{
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<j)
    {
        int sum=a[i]+a[j];

        if(sum>k) j--;

        else if (sum<k) i++;

        else
        { 
            if(a[i]!=a[j])
            {
                int c1=1;
                int c2=1;
                while(a[i]==a[i+1]) 
                {i++; c1++;}
                while(a[j]==a[j-1])
                 {j--; c2++;}

                ans+=c1*c2;
                i++;
                j--;
            }
            else
            {
               int c3=2;
                while(a[i]!=a[j] && i<j) i++;c3++;
                ans+=c3*(c3-1)/2;

            }



        }
    }
    return  ans;
}


int main()
{   int n=9;
    int k=8;
    int a[n]={1, 2,3,4,5,6,7,8,9};

   cout<< pairCount(a,n,k);
    
    
    return 0;
}