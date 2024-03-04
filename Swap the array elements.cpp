class Solution{
  public:
    void swapElements(int arr[], int n){
        
        // Your code here
        
         for (int i = 0; i < n - 2; i += 1) {
        swap(arr[i], arr[i + 2]);
    }
    // return arr;
        
    }
};
