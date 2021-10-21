#include<iostream>
using namespace std;

int   combi(int n,int r)
{
    if(r==0 || n==r)
        return 1;

        else
        return combi(n-1,r-1)+combi(n-1,r);   
}
int main(){
    cout<<combi(5,4);
    // cout<<fact(5);
    return 0;
}