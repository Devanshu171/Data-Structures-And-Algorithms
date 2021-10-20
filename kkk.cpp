#include<iostream>
using namespace std;

int main(){
    int a[] = {1,-1,3,-2,-8,1,7,10,23};
    int n=9;
    int k=0;

    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==k)
            maxlen=max(maxlen,j-i+1);
        }
    }

    cout<<maxlen;
    return 0;
}