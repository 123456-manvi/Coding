class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        // int n=s.length();

        // int i=0;
        // string res=string(n,'0');

        // for(char &ch:s){
        //     if(ch=='1')
        //     {
        //         // lsm me agar 1 h to fill krna start kro
        //        if(res[n-1]=='1')
        //        {
        //             res[i]='1';
        //              i++;
        //        }
        //          else{
        //         res[n-1]='1';
        //     }

        //     }
          
        // }
        // return res;
        


        // 2 approach..................
        int n=s.length();

        string res=string(n,'0');

        int j=0;
        int count_1=count(s.begin(),s.end(),'1');

        while(count_1>1){
            res[j]='1';
            j++;
            count_1--;
        }

        res[n-1]='1';
        return res;



        
        // 3 way........................
        // sort(s.rbegin(),s.rend());
        // for(int i=s.size()-1;i>=0;i--)
        // {
        //     if(s[i]=='1')
        //     {
        //         swap(s[i],s[s.size()-1]);
        //     }
            
        // }
        // return s;



    //   4 way....................
    int count_1=0;
    int count_0=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        count_1++;
        if(s[i]=='0')
        count_0++;
    }

    string ans;
    ans=string(count_1-1,'1')+string(count_0,'0')+'1';
     return ans;

    }
};
