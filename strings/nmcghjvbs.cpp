#include <iostream>
#include <cstring>
using namespace std;

// string removeConsecutiveDuplicates(string input)
// {
//     int i=0;
//     int j=i+1;
//     string a="";
//     while(j<=input.size())
//     {
//         if(input.size()==1)
//            { a+=input[i];
//             return a;}
//         while(input[i]!=input[j]) 
//         {
//             a+=input[i];
//             i++;
            
//      }
//      while(input[i]==input[j]) j++;
//     a+=input[i];
//      i=j;
//     }
//     return a;
// }

string  removeConsecutiveDuplicates(string input)
{
    string a="";
    int n=input.length();
    for(int i=0;i<n;i++)
    {
            if(input[i+1]!=input[i])
                a+=input[i];
    }
    return a;
}
int main()
{
    string str;
    cin >> str;
    string ans = removeConsecutiveDuplicates(str);
    cout << ans << endl;
}