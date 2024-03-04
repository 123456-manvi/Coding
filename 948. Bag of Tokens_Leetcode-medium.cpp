#Ask in Google.............

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
// target is return maxScore...........
        int maxScore=0;     // initially

        // sort the tokens
        sort(begin(tokens), end(tokens));

        int i=0,j=n-1;

        int score=0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                // score bda rhe h by dec power
                power-=tokens[i];    //dec power
                score+=1;
                i++;

                maxScore=max(maxScore, score);
            }

            else if(score>=1)
            {
                // power kon inc kr do by dec score
                power+=tokens[j];
                score-=1;
                j--;
            }

            else{
                return maxScore;
            }
        }

        return maxScore;
    }
};
