#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}


void Sort012(int a[],int n)
{   
    int lo=0;
    int hi=n-1;
    int mid=0;

    while(mid<=hi)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[lo++],a[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid],a[hi--]);
            break;
        }



    }

}

int main()
{
    int n;
    cout<<" Enter the numbers of elements : ";
    cin>>n;
       int arr[n];
       cout<<"enter the elements :"<<endl;
       for(int i=0;i<n;i++)
            cin>>arr[i];

            Sort012(arr,n);
            cout<<"after sorting :"<<endl;
            display(arr,n);
    
    return 0;
}