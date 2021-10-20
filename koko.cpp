#include<iostream>
using namespace std;

    bool isvalid(int a[], int mx, int n, int h, int sum)
    {
        int hours = 0;
        int banana = 0;
int temp=0;
int temp2;
int i=0;
int left=0;
        while(banana<sum)
        {
            if(i<n)
            {

            int ban=a[i]+temp;
                
            if (ban <= mx)
            {
                banana +=ban;
                hours++;
                temp=0;
            }

            if(ban>mx)
            {
                banana+=mx;
                hours++;
                temp=ban-mx;
            }
            temp2=temp;
            
            if (hours > h)
                return false;
            // i++;
            }
           
            else
            {
                temp2+=left;
                    if(temp2<=mx){
                    banana+=temp2;
                    temp2=0;
                    hours++;
                    }
                    if(temp2>mx)
                    {
                        banana += mx;
                        hours++;
                    
                        temp2-=mx;
                    }
                    if (hours > h)
                        return false;
            }
            i++;
            }

            return true;
        }
        
       
        
   
    int minEatingSpeed(int piles[], int h,int n)
    {
        
        int sum = 0;
        int res = -1;
        // if (h > n)
        //     return res;
        for (int i = 0; i < n; i++)
            sum += piles[i];

        int start = 0;
        int end = sum;
        while (start <= end)
        {
                int mid = start + (end - start) / 2;
            if (isvalid(piles, 21, n, h, sum))
            {
                res = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }
        return res;
    }

int main(){
    int a[] = {30, 11, 23, 4, 20};
    int h=6;
    int n=5;
    cout<<minEatingSpeed(a,h,n);
    return 0;
}