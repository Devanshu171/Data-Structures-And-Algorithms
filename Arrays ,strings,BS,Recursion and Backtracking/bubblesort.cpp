#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
       { cout<<a[i]<<" ";}
        cout<<endl;
}
void bubble(int a[],int n)
{   int flag;
    for(int i=0;i<n-1;i++)
    {   flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
                    cout<<i+1<<"st pass :"<<" ";
                    display(a,n);
            }
        }
        
        if(flag==0) 
         {  
              cout<<"Already sorted";
              break;
        }
    }
    

}
int main()
{   int n;
cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
cout<<"Before sorting: "<<endl;
display(a,n);
cout<<endl;
    bubble(a,n);
    cout<<"After sorting "<<endl;
    display(a,n);
    
    
    return 0;
}