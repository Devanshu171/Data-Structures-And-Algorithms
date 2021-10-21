#include<iostream>
using namespace std;

int main(){
    string s="I love my country";

    string a="";
    for(int i=s.size();i>0;i--)
    {
        if(s[i]==' ')
        a+=s.substr(i+1,s.size())+' ';
    }
cout<<a;







    return 0;
}