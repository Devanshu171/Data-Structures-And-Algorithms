
    int n=matrix.size();   
    for(int i=0;i<n;++i)
    {
        int l=0;
        int h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(matrix[i][mid]==x)
            {
                return {i,mid};
            }
            
             if (matrix[i][mid]>x)
            {
                	h=mid-1;
            }
            
            else
            {
                l=mid+1;
       		 }
        }
    }
        return {-1,-1};
    
    }