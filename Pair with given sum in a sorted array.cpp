class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        
        int i=0,j=n-1,k=0,ans=0;
        
        while(i<j)
        {
            k=arr[i]+arr[j];
            
            if(k==sum)
            {
                ans++;
                i++;
                j--;
            }
            
            else if(sum<k)
            {
                j--;
            }
            
            else{
                i++;
            }
        }
        
        if(ans==0) return -1;
        
        return ans;
    // tc->o(1)
      // sc->o(1)
        
    }
};
