#include<iostream>
using namespace std;
void TOH(int n,int A,int B,int C)
{
    if(n>0)
   { TOH(n-1,A,C,B);
   
    cout<<n<<" "<<"from "<<A<<"to "<<C<<'\n';
    TOH(n-1,B,A,C);}
}
int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    TOH(n,a,b,c);
    return 0;
}