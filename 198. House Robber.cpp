class Solution {
public:

    // int solve(vector<int>& nums, int size, int index){
    //     // bc
    //     if(index>=size){
    //         return 0;
    //     }
  
    //     // chori krlo i index pr

    //     int option1=nums[index]+solve(nums,size,index+2);

    //     // chori mt kro i index pr
    //     int option2=0+solve(nums,size,index+1);

    //     int finalAns=max(option1,option2);
    //     return finalAns;
    // }

    // 2 way......................
    int solveUsingRecursion(vector<int>& nums, int index){
        // bc
        if(index >= nums.size()) {
            return 0; 
        }

        // recursive relation
        int include=nums[index] + solveUsingRecursion(nums, index+2);
        int exclude=0 + solveUsingRecursion(nums, index+1);
        int ans=max(include, exclude);
        return ans;
    }


    int solveUsingMem(vector<int>& nums, int index, vector<int>& dp){
        // bc
        if(index >= nums.size()){
            return 0;
        }
        // ans already exists
        if(dp[index] !=-1){
            return dp[index];
        }

        // recursive relation
        int include=nums[index] + solveUsingMem(nums, index+2,dp);
        int exclude=0 + solveUsingMem(nums, index+1,dp);
        dp[index]=max(include, exclude);
        return dp[index];

    }
    int rob(vector<int>& nums) {
        // int size=nums.size();
        // int index=0;
        // int ans=solve(nums,size,index);
        // return ans;

        // 2 way...................
        // int index=0;
        // 1 d array

        int index=0;
        int n=nums.size();
        vector<int> dp(n+1,-1);
        int ans=solveUsingMem(nums, index, dp);
        return ans;
    }
};
