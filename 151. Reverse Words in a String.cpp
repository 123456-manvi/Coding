class Solution {
public:
    string reverseWords(string s) {

        // 1 reverse kr denge use i pointer
        // reverse words use l and r
        // each word k bd 1 space rkh denge

        reverse(s.begin(), s.end());

        int i=0;
        int l=0,r=0;
        int n=s.length();

        while(i<n){
            while(i<n && s[i]!=' '){
                // i ko agar character dikha to r ko dega
                // i++ and r++ kr denge 
                s[r]=s[i];
                r++;
                i++;

            }

            // l and r ko reverse kr denge
            if(l<r){
                reverse(s.begin()+l, s.begin()+r);

                s[r]=' ';
                r++;

                l=r;
            }

            i++;
        }
        
        s=s.substr(0, r-1);
        return s;
    }
};
