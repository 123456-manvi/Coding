class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         for(int n : nums) {
            mp[n]++;
        }

        vector<pair<int,int> > freq_nums(mp.begin(), mp.end());

        sort(freq_nums.begin(), freq_nums.end(), [](pair<int, int>& p1, pair<int, int>& p2){
            if(p1.second==p2.second)
    return p1.first>p2.first;

    return p1.second>p2.second;
        });


         vector<int>result;
         for(int i=0;i<k;i++)
         {
            result.push_back(freq_nums[i].first);
         }

    return result;
}
};
