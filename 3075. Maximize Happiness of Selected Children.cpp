class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(begin(happiness), end(happiness), greater<int>());

        int c=0;
        long long result=0;

        for(int i=0;i<k;i++)
        {
            result+=max(happiness[i]-c, 0);
            c++;
        }

        return result;
    }

    // tc ->o(logn)
    // sc->o(1)
};
