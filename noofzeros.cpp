#include<iostream>
using namespace std;
 
int count(int n,int cnt)
{
    
        if(n==0)
        return cnt ;

          if(n%10==0)
        {
           
        return count(n/10,cnt+1);
        }

        else
        return count(n/10,cnt);
}
int main(){
    int cnt=0;
    cout<<count(10463020,cnt);
    
    return 0;
}