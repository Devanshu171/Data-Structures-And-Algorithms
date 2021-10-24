#include<iostream>
using namespace std;

int main()
{   string s;
getline(cin,s);
int max=0;
char res;
int count[26]={0};
for(int i=0;i<26;i++)
        count[s[i]-'a']++;

        for(int i=0;i<26;i++)
        {
            if(count[i]>max)
                {
                    max=count[i];
                    res=(i+'a');
                }
        }
        cout<<res;

    return 0;
}