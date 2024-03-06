class Solution {
public:
    int minimumLength(string s) {
        int l=0, r=s.length()-1;
        while(l<r && s[l]==s[r])
        {
            char ch=s[l];

            // prefix...
            while(l<=r && s[l]==ch)
            l++;

            // suffix..
            while(r>=l && s[r]==ch)
            {
                r--;
            }

           
        }
         return l>r ? 0: r-l+1;
    }
};
