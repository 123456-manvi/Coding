class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];  // Array to store the last positions of characters
        fill(begin(hash), end(hash), -1); // Initialize all values to -1

        int l = 0, r = 0;  // Two pointers for the sliding window
        int maxLen = 0;
        int n = s.size();

        while (r < n) {
            if (hash[s[r]] != -1) {  // If the character was seen before
                if (hash[s[r]] >= l) {
                    l = hash[s[r]] + 1;  // Move the left pointer forward
                }
            }

            int len = r - l + 1;
            maxLen = max(len, maxLen);
            hash[s[r]] = r;  // Update the last seen position of the character
            r++;
        }
        return maxLen;
    }
};
