#include<iostream>
using namespace std;
 struct Array
 {
     int *A;
     int size;
     int length;


 };

void Display(struct Array arr )
    {
        cout<<"Elements are:"<<'\n';
        for(int i=0;i<arr.length;i++)
            cout<<arr.A[i]<<" ";
    }


int main()
{   
    struct Array arr;
    int n;
    cout<<"Enter size of an array: "<<'\n';
    cin>>arr.size;
    arr.A=new int[arr.size];
    arr.length=0;

    cout<<"Enter no. of elements: "<<'\n';
    cin>>n;
    cout<<"Enter all the elements: "<<'\n';
    for(int i=0;i<n;i++)
        cin>>arr.A[i];
        cout<<endl;

    arr.length=n;
    
    Display(arr);
    return 0;
}