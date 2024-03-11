class Solution {
public:
    string customSortString(string order, string s) {
        
        // take 2 string s1 and s2 
        // s1->order k acc elem ayenge jo s2 m bhi h
        // s2->me order k acc ele nhi ayenge


        string s1,s2;
        int a[26]={0};

        for(char c:order)
        {
            // iterate acc to order..

            a[c-'a']++;
        }

        // acc to str

        for(char c:s)
        {
            if(a[c-'a']==0)
            {
                // s2 me agr 0 h to s2  push kr do
                s2+=c;
            }

            else{
                // inc c

                a[c-'a']++;
            }
        }

        // now again traverse to order
        for(char c:order)
        {
            while(a[c-'a']>1)
            {
                s1+=c;
                a[c-'a']--;
            }
        }

        return s1+s2;
    }
};
