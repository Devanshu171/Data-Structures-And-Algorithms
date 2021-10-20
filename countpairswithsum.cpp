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
                while(a[i]==a[i+1]) i++; c1++;
                while(a[j]==a[j+1]) j--; c2++;

                ans+=c1*c1;
            }
            else
            {
               int c3=1;
                while(a[i]==a[j] && i<j) i++;c3++;
                ans+=c3*(c3-1)/2;

            }



        }
    }
    return  ans;
}


int main()
{   int n;
    int k;
    int a[n];


    cin>>n>>k;

    for (int i = 0; i < n; i++){
            cin>>a[i];
    }
    
   cout<< pairCount(a,n,k);
    
    
    return 0;
}