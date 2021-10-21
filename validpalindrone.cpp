#include<iostream>
using namespace std;
bool validpali(int i,string s)
{
   int n=s.size();
   if(i>=n/2)
    return true;

        else if(s[i]==s[n-i-1])
        return validpali(i+1,s);

        else
        return false;

}
int main(){
    string s="racecar";
    bool flag=validpali(0,s);
    if(flag)
    cout<<"valid";
    else
    cout<<"invalid";
    return 0;
}