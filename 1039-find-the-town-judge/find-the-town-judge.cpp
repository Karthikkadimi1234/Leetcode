class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int>mp;
        if(n==1) return 1;
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
        }
        vector<int>res;
        for(int i=0;i<trust.size();i++)
        {
            res.push_back(trust[i][0]);
        }
        int ma=INT_MIN,var,f=0;
        for(auto it:mp) 
        {
        if(find(res.begin(),res.end(),it.first)==res.end() and it.second==n-1)
        {
             var=it.first;  
             f=1;
        }
        }
        if(f==1) return var;
        return -1;
    }
};