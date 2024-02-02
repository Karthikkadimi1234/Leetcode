class Solution {
public:
    int coch(int idx,vector<int>&coins,int amo,vector<vector<int>>&dp)
    {
        if(amo==0)return 0;
        if (idx>=coins.size())return INT_MAX-1;
        if(dp[idx][amo]!=-1)return dp[idx][amo];
        
        int a=INT_MAX,b=INT_MAX;
        if(amo>=coins[idx])
        {
             a=1+coch(idx,coins,amo-coins[idx],dp);   
        }    
         b=coch(idx+1,coins,amo,dp);
        return dp[idx][amo]=min(a,b);
    }
    int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
     vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
     int ans=coch(0,coins,amount,dp);
     if(ans==INT_MAX-1)return -1;
     return ans;
    }
};