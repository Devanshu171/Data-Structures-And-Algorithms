#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,3,4,5,6,6,6,7};
    for(int i=0;i<sizeof(a)/sizeof(a[0])-1;i++)
    {
        if(a[i]==a[i+1])
        {
            int j=i+1;
            while(a[j]==a[i]) j++;
            cout<<a[i]<<": "<<j-i<<'\n';
            i=j-1;
        }
    }
    return 0;
}