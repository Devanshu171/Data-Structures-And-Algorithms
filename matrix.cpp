#include<iostream>
using namespace std;
//  int a[3][3]={ {1,2,3},{4,5,6},{7,8,9}};

int main()
{   int n=3;
    int a[n][n]={  {1,2,3},
                    {4,5,6},
                    {7,8,9},
                 };
    int b[n][n];
                            //    ****using space*****
    // int t=n-1;  
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         b[j][t]=a[i][j];
    //     }
    //     t--;
    // }
    // for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<n;j++)
    //             cout<<b[i][j]<<" ";

    //             cout<<endl;
    //     }

///******inplace method
    // 1st we take transpose of matrix
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {   int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    // // 2nd swaps values in column

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0,k=n-1;j<k;j++,k--)
    //     {
    //         int temp=a[i][j];
    //         a[i][j]=a[i][k];
    //         a[i][k]=temp;
    //     }
    // }
    // display
    //   for(int i=0;i<n;i++)
    //     {
    //         for(int j=0;j<n;j++)
    //             cout<<a[i][j]<<" ";

    //             cout<<endl;
    //     }


    // rotatig anti-clockwise

//     int t=n-1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             b[t][j]=a[j][i];
//         }
//         t--;
//     }

//  for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//                 cout<<b[i][j]<<" ";

//                 cout<<endl;
//         }
//inplace method
     //1st we take transpose of matrix
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //        int temp= a[i][j];
    //        a[i][j]=a[j][i];
    //        a[j][i]=temp;
    //     }
    // }

    //  //2nd swaps values in row

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0,k=n-1;j<k;j++,k--)
    //     {
    //         int temp=a[j][i];
    //         a[j][i]=a[k][i];
    //         a[k][i]=temp;
    //     }
    // }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";

                cout<<endl;
        }
    return 0;
}