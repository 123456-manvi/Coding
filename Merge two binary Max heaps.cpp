class Solution{
    public:
    
    void heapify(vector<int>&v, int i, int n){
        while(true){
            int left=2*i+1;
            int right=2*i+2;
            int swapindex=i;
            
            if(left<n && v[left]>v[i]){
                swapindex=left;
            }
            if(right<n && v[right]>v[swapindex]){
                swapindex=right;
            }
            if(swapindex==i){
                break;
            }
            swap(v[i],v[swapindex]);
            i=swapindex;
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        // 1. merge 2 heap vectors
         vector<int> c(a.begin(), a.end());
        c.insert(c.end(), b.begin(), b.end());
        int size = c.size();
        
        // Heapify the merged vector
        for (int i = (size / 2) - 1; i >= 0; --i) {
            heapify(c, i, size);
        }
        
        return c;
    
    }
};
