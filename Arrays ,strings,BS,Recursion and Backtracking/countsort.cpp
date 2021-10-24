#include<iostream>
using namespace std;
int maxElement(int a[],int n)
{
    int maxi=-100000;
    for(int i=0;i<n;i++)
    maxi=max(maxi,a[i]);

    return maxi;

}

void countsort(int a[],int n)
{
    int mx=maxElement(a,n)+1;
    int count[mx]={0};
   
    for(int j=0;j<n;j++)
    count[a[j]]++;

    // for (int k = 0; k < mx; k++)
    //     cout << count[k] << " ";

    int k = 0;
    for(int i=0;i<mx;i++)
    {

        if (count[i] > 0)
        {
            while (count[i] > 0)
            {
                a[k++] = i;
                count[i]--;
            }
        }
    }

}
int main(){
    int a[]={10,9,8,17,6,5,4,3,2,1,0};
    int n=11;
    countsort(a,n);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}