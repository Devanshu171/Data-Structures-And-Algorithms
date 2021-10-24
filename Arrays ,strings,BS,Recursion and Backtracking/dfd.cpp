while (t <= b && l <= r)
{
    if (dir == 0)
    {

        for (int i = t; i <= r; i++)
        {
            count++;
            if (count == k)
            {
                return a[t][i];
            }
        }
        t++;
        dir = 1;
    }
    else if (dir == 1)
    {

        for (int i = t; i <= b; i++)
        {
            count++;
            if (count == k)
            {
                return a[i][r];
            }
        }
        r--;
        dir = 2;
    }
    else if (dir == 2)
    {

        for (int i = r; i >= l; i--)
        {
            count++;
            if (count == k)
            {
                return a[b][i];
            }
        }
        b++;
        dir = 3;
    }
    else if (dir == 3)
    {

        for (int i = b; i >= t; i--)
        {
            count++;
            if (count == k)
            {
                return a[i][l];
            }
        }
        l--;
        dir = 0;
    }
}
}