#include <iostream>
using namespace std;

int main()
{
    int d;
    int tsum;
    cin >> d >> tsum;
    int min, max;
    cin >> min >> max;

    if(max==0)
        cout << "NO";
    else if(d*max<=tsum)
        cout << "NO";
    else if(d*(max-min)>tsum)
        cout << "NO";
        else{
            cout << tsum / (d + 1) << " " << d + 1;
        }

    return 0;
}