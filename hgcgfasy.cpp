#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    // Write your code here
    string a;
    int i=0;
    int n=input.length();
    while(i<n)
    {
        int j=0;
        if(j<n)
        {
            while(input[j]!=' ')
            j++;

            for(int k=j-1;k>=i;k--)
            {
                a+=input[k];
            }
            a+=' ';
            i=j+1;
        }
        else if(j==n)
        {
            for(int k=j;k>=i;k--)
                a+=input[k];
        }

        
    }
    return a;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    
}