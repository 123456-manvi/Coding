class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      int i=0,j=nums.size()-1;
      int c=0;
      while(i<j){
        if(nums[i]+nums[j]==k){
            c++;
            i++;
            j--;
        }

       else if(nums[i]+nums[j]<k){
            i++;
        }
        else{
            j--;
        }

      }

      return c;
        

        // 2 operations..
  
    //      unordered_map<int,int>mp;
    //     int count=0;
    // for(auto x:nums)
    // {
    //     if(mp[k-x])
    //     {
    //         mp[(k-x)]--;
    //         mp[x]--;
    //         count++;
    //     }
    //     mp[x]++;
    // }
    //     return count;
    }
};
