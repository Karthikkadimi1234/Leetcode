class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>mp;
        if(n==1) return 1;
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
        }
        int ma=INT_MIN,var;
        for(auto it:mp) 
        {
            if(it.second>ma)
            {
                ma=it.second;
                var=it.first;
            }    
        }
        vector<int>res;
        for(int i=0;i<trust.size();i++)
        {
            res.push_back(trust[i][0]);
        }
        if(find(res.begin(),res.end(),var)==res.end() and ma==n-1) return var;
        return -1;
    }
};