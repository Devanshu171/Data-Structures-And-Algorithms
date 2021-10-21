#include<iostream>
#include<string>
using namespace std;

int main()
{
//     string str(5,'k');
//   cout<<str[4];

string str="kabir";
string str1=" 123";
// str.append(str1);
str+=str1;
// cout<<str;

// assign()

// assign a new vakue to a sring
string name="dev";
name.assign("kabir");
cout<<name;
    
    return 0;
}