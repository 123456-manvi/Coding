class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    
	    unordered_map<int,int>freqMap;
	    
	    for(int i=0;i<n;++i)
	    {
	        for(int j=0;j<n;++j)
	        {
	            freqMap[mat1[i][j]]++;
	        }
	    }
	    
	    int c=0;
	    
	   // find pair
	   for(int i=0;i<n;++i)
	   {
	       for(int j=0;j<n;++j)
	       {
	           int comp=x-mat2[i][j];
	           
	            if (freqMap.find(comp) != freqMap.end()) {
                c += freqMap[comp];
            }
	       }
	   }
	   
	    return c;
	    
	    
	}
};
