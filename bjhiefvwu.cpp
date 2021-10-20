
    
    for (int i = 0; i < n; ++i)
    {
        int l = 0;
        int r = n - 1;

        // Binary search each row.
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if(matrix[i][mid] == x) 
            {
                return {i, mid};
            }
            if(matrix[i][mid] > x) 
            {
                r = mid - 1;
            }
            else 
            {
                l = mid + 1;
            }
        }
    }
    
    return {-1, -1};
}