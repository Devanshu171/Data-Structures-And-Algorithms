#include <iostream>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str; 
        s.insert(str);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string str1;
        cin >> str1;
        if (s.find(str1) != s.end())
        {
            cout << "found" << endl;
        }

        else
            cout << "not found" << endl;
    }

    return 0;
}