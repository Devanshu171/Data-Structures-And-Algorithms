#include<iostream>
using namespace std;
string reversword(string str)
{

    string s = "";
    int i = str.size() - 1;

    while (i >= 0)
    {
        while (str[i] == ' ' && i >= 0)
            i--;
        int j = i;
        if (i < 0)
            break;
        while (str[i] != ' ' && i >= 0)
            i--;
        if (s.size() == 0)
        {
            s += str.substr(i+1, j - i);
        }
        else
        {
            s += ' ';
            int k=i+1;
            s += str.substr(k, j - i);
        }
    }

    return s;
}
int main(){
    string str = "the sky is blue";
    cout << str.size() << endl;
    string s=reversword(str);
    cout<<s<<endl;
    cout<<s.size();

    return 0;
}