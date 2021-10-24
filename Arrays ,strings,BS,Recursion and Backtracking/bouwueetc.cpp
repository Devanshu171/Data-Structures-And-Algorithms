
    #include<iostream>
    using namespace std;
    bool isvalid(int a[], int m, int cap, int mid, int n)
    {
        int fl = 0;
        int bou = 0;
        int i = 1;
        int temp[n];
        for(int i=0;i<n;i++)
            temp[i]=a[i];
        while (i <= mid)
        {
            for (int j = 0; j < n; j++)
                temp[j] -= 1;

            for (int k = 0; k < n; k++)
            {
                int x = temp[k];
                if (temp[k] == 0)
                {
                    fl++;
                    if (fl == cap)
                    {
                        bou++;
                        fl = 0;
                    }

                    if (bou == m)
                        return true;
                }
            }
            i++;
        }
        return false;
    }

    int minDays(int a[], int m, int k, int n)
    {

        int mins = 1000000;
        int maxs = 0;
        int res = -1;

        for (int i = 0; i < n; i++)
        {
            
            if (a[i] > maxs)
                maxs= a[i];
            if(a[i]<mins)
            mins= a[i];
        }

        int start = mins;
        int end = maxs;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (isvalid(a, m, k, mid, n))
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
        int a[] = {7, 7, 7, 7, 12, 7, 7};
        int n=7;
        int m = 2;
         int k = 3;
        cout<<minDays(a,m,k,n);
        return 0;
    }
    