#include<iostream>
using namespace std;
/*
    Time Complexity: ON ^ 2)
    Space Complexity: O(N)
       
    Where 'N' is the length of the array.
*/

bool isValidPair(vector<int> &arr, int n, int k, int m) 
{

    // An odd length array cannot be divided into pairs.
    if (n % 2 == 1) 
	{
        return false;
    }
    
    bool visited[n];

    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            
            // If arr[i] and arr[j] is not included in any pair.
            if (visited[i] == false && visited[j] == false) 
			{
                if ((arr[i] + arr[j]) % k == m) 
				{
                    visited[i] = true;
                    visited[j] = true;

                    /*
					    If any pair formed, then break and
						move to next pair that can be formed.
					*/
                    break;
                }
            }
        }

    }
    
    // Check the condition if all the elements can be paired.
    for (int i = 0; i < n; i++) 
	{
        if (visited[i] == false) 
		{
            return false;
        }
    }

    return true;
}