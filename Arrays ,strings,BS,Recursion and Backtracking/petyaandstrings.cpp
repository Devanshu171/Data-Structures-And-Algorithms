#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, str;
    cin >> s >> str;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if (s == str)
        cout << "0";
    else if (s < str)
        cout << "-1";
    else
        cout << "1";

    return 0;
}