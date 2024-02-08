class Solution {
public:
int ps(int idx,int n,vector<int>&v,vector<vector<int>>&dp)
        {
            if(n==0)
            {
                return 0;
            }
            if(idx>=v.size()) return INT_MAX-1;
            if(dp[idx][n]!=-1) return dp[idx][n];
            int a=INT_MAX,b=INT_MAX;
            if(n>=v[idx])
            {
               a= 1+ps(idx,n-v[idx],v,dp);
            }
            b=ps(idx+1,n,v,dp);
            return dp[idx][n]=min(a,b); 
        }
    int numSquares(int n) {
        vector<int>v;
        for(int i=1;i*i<=n;i++)
        {
            v.push_back(i*i);
        }
        vector<vector<int>>dp(v.size(),vector<int>(n+1,-1));
      return  ps(0,n,v,dp);
    }
};