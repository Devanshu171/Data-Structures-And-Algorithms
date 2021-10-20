#include <iostream>
using namespace std;

void findo(string s, char c)
{ //int count=0;
    int start = -1;
    int end = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {

            if (start == -1)
            {
                start = i;
            }

            end = i;
        }
    }
    if (start = -1)
    {
        cout << "not present";
    }
    else
        cout << start << " " << end;
}

int main()
{
    string s;
    char c;
    cout << " Enter the string : " << '\n';
    getline(cin, s);
    cout << " Enter the character : " << '\n';
    cin >> c;
    findo(s, c);

    return 0;
}