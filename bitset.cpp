#include<iostream>
#include<bitset>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    
// Bitset
//int ->16
//char->8
// stores only one and zero 1,0
bitset<5> bt;
cin>>bt;
 // 10101

 // all
 // any
 // count
 // flip
 // none
 // set

///// Algorithm

    // sorting
    //array, vector 

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n); // in increasing order
    sort(arr+1,arr+4); // in increasing order
    // take nlogn
    vector<int>vec(5,0);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin()+1, vec.begin()+4);

    // vec-> {1,6,2,7,4}
    // sort it so that only indexes from 1to 3

    // if i wanna revers
    reverse(arr,arr+n);

    // if i want to find maximum element in any index range
    // i=j give me the maximun
    // int maxi=INT_MAX;

    int el=*max_element(arr,arr+n);
    // *for element without  * gives itrators(index) 
    // same for minimum 

    // given a range and find sum in range

    int sum=accumulate(arr,arr+n,0);
                    // begin,end,initial sum


// arr[]={1,6,7,1,2,1,3}
//x=1
// tell me how many times the element 1 occured
// int count=0;

// count(firstitrator,lastItrator,x);
int cnt =count(arr,arr +n,1);

/// arr[] -{1,2,5,1,2,4,4}
// find first occurence of 2

    auto fi=find(arr,arr+n,2);

// binary search
// this stl only work on sorted aarrays
// arr[] -> {1,2,4,5,6,9}
// x=9;
//true->9 exist
// false -> 8 does not exixt in my arra

bool res=binary_search(arr,arr+n,8);
//lognis 

// lower bound function
// return an iterator pointing to an element which 
// not less then x
//arr[] -> [1,5,7,8,10,10,10,11,11,12]
// x=10

















    return 0;
}