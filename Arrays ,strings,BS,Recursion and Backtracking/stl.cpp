#include<iostream>
using namespace std;
#include<array>
#include<vector>
#include <algorithm>
// array<int,3> arr; //->{0,0,0}
int main()
  {
    //   //Arrays -> int arr[100];
    // array<int,3> arr;//->{?,?,?}

    // array<int,5> arr={1,2};
    // // -> {1,2,0,0,0}
    // array<int,5> arr={0};
    // // ->{0,0,0,0,0}
    // int arr[100]={0};
    // // ->{0,?,?,?,....}

    // array<int,5> arr;
    // arr.fill(0);// ->{0,0,0,0,0}

    // //arr.at(index);
    // //to access the array

    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr.at(i)<<" ";
    // }

    // //itrators
    // // begin(), end(), rbegin(), 
    // //      rend()

    // array<int,5> arr={1,2,3,4,5};
    //     for(auto it: arr.begin(); it!=arr.end();it++)
    //     { 
    //         cout<<*it<<" ";
    //     }
    // //for each loop
    //     for(auto it: arr)
    //     {
    //         cout<<it<<" ";
    //     }
     // Vectors
    //  int arr[1000000];
     // 10^6 max size of an arrayin local 
     // and 10^7 in global scope
    //  vector<int> arr; //-> {}

    // //Creats a dyanmic array
    // // sagmentation fault if we push_back
    //  cout<<arr.size()<<endl; //-> print 0
    //  arr.push_back(0); // {0}
    //  arr.push_back(2); // {0,2}
    // cout<<arr.size()<<endl; //-> print 2
    // arr.pop_back();
    // cout<<arr.size(); // -> print 1
    // arr.push_back(0); // {0,0}
    //  arr.push_back(2); // {0,0,2}
    //  arr.clear();
     // -> erase all the elements at once


//      vector<int> vec1(4,0); // -> {0,0,0,0}
//     // size 4 and all 0
//     vector<int> vec2(4,10); //->{10,10,10,10}

//    // copy an array 
//    vector<int> vec3(vec2.begin(), vec2.end());
//    // will creat an array will begin with starting
//    // and fill till the end of vec2
//    vector<int> vec4(vec3);
//    will copy whole array 
    vector<int> raj;
    // raj.push_back(0);
    // raj.push_back(5);
    // raj.push_back(6);
    // raj.push_back(4);
    // raj.push_back(1); 
    //-> {0,2,3,4,5}
    sort(raj.begin(),raj.end());
// want {2,3}
    // vector<int> raj1(raj.begin()+1,raj.end()-2);
    // for(auto i:raj1)
    // {
    //     cout<<i<<" ";
    // }
    //  vector<int> raj1(raj);
    // for(auto i:raj1)
    // {
    //     cout<<i<<"  ";
    // }


    // to defining 2d vectors
      
      vector<vector<int>> vec;
// vector< (vector<int>)>vec;
//here vector<int> is data type;
    vector<int> raj1;
    raj1.push_back(1);
    raj1.push_back(2);

    vector<int> raj2;
    raj2.push_back(10);
    raj2.push_back(20);

    vector<int> raj3;
    raj3.push_back(19);
    raj3.push_back(25);
    raj3.push_back(27);

    vec.push_back(raj1); //-> have index 0 in vec
    vec.push_back(raj2); //-> have index 1 in vec
    vec.push_back(raj3);//-> have index 2 in vec
 
//   for( auto vctr:vec) // here  is a vector itself
//   {
//       for(auto i:vctr)
//       {
//           cout<<i<<" ";
//       }
//       cout<<endl;
//   }
//  to access elements
 

 for(int i=0;i<vec.size();i++)
 {
      for(int j=0;j<vec[i].size();j++)
         cout<<vec[i][j]<<" ";
    cout<<'\n';
 }

// define 10 x 20

vector<vector<int>> vec(10,vector<int>(20,0));

// arrays of vector

    vector<int> arr[4];
// 3d vector

//10 x 20 x 30
vector<vector<vector<int>>>vec1(10, vector<vector<int>> vec(10,vector<int>(20,0));














    return 0;
}