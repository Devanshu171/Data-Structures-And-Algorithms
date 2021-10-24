#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s="codes";
    string s2="devansucodes";
    string s3;
    bool res=false;
    for(int i=0;i< (s2.length()-s.length())+1;i++)
    {
        s3=s2.substr(i,s.length());
        if(s.compare(s3)==0)
        {
                res=true;
                break;
        }
    }
    cout<<res<<endl;
    return 0;
}