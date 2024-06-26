class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();

        // Vector to store all left multiplication
        vector<int> left(n);

        // Vector to store all right multiplication
        vector<int> right(n);

        left[0] = 1;
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        right[n - 1] = 1;
        for (int i = n - 2; i > -1; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }

        return ans;
        
    }
};
