#include<iostream>
using namespace std;

int main()
{
    string s="dev";
    int n=s.size();
   for(int i=0;i<n;i++)
   {    
       string temp="";
       for(int j=i;j<n;j++)
        {
            temp+=s[j];
            cout<<temp<<endl;
        }
   }
    return 0;
}