

// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) {
    struct pair minmax;
    int i ;
    if(n==1)
     {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
     }
       if(arr[0]>arr[1])
       {
         minmax.min=arr[1];
          minmax.max=arr[0];
       }
    
       else
      {
       
       minmax.min=arr[0];
        minmax.max=arr[1];
       }
    
       for(i=2;i<n;i++)
       {
       
        if(arr[i] > minmax.max)
          minmax.max=arr[i];
        
        else if 
          (arr[i]<minmax.min)
           minmax.min=arr[i];
        
        }
          return minmax;
     
}
   
    
    
