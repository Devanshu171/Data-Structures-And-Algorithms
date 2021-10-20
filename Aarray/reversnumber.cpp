#include<iostream>
using namespace std;
int sum=0;
void revers(int n)
{   if(n==0)
    return;
    int r=n%10;
    sum=sum*10+r;
    
    return revers(n/10);
}
int main(){
   revers(4321);
   cout<<sum;
    return 0;
}