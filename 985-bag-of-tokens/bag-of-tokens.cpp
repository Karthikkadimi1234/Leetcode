class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1,score=0,maxx=0;
       // cout<<maxx;
       if(tokens.empty()) return 0;
       if(power<tokens[0]) return 0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i];
                score+=1;
                i++;
            }
            else if(score>=1)
            {
                power+=tokens[j];
                score--;
                j--;
            }
            maxx=max(maxx,score);
        }
        return maxx;
    }
};