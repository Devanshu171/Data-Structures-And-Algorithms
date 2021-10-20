#include<iostream>
using namespace std;
string isPalindrone(string str)
{
    for(int i=0;i<str.length()/2;i++)
    {
        if(str[i]!=str[str.length()-i-1])
        {
                return "NO";
        }

    }
    return "Yes";
}
int main(){
    string str;
    cin>>str;

    cout<< isPalindrone(str);

    return 0;
}