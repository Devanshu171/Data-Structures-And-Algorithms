#include<iostream>
#include<unordered_set>
using namespace std;
int checkdis(int a[],int n)
{
        // int count=1;
        // for(int i=1;i<n;i++)
        // {       int j=0;
        //     for( j=0;j<i;j++)
        //         {
        //             if(a[j]==a[i])
        //                 break;
        //         }
        //         if(i==j)
        //             count++;
        // }
        // return count;
        unordered_set<int> set;
        for(int i=0;i<n;i++)
        {
            set.insert(a[i]);
        }
        return set.size();

}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
            cin>>a[i];

            cout<<checkdis(a,n);


    return 0;
}