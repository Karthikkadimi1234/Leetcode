class Solution {
public:
   int coch(int idx,vector<int>&coins,int amo,vector<vector<int>>&dp)
    {
        if(amo==0)return 1;
        if (idx>=coins.size())return 0;
      if(dp[idx][amo]!=-1)return dp[idx][amo];
        
        int a=0,b=0;
        if(amo>=coins[idx])
        {
             a=coch(idx,coins,amo-coins[idx],dp);   
        }    
         b=coch(idx+1,coins,amo,dp);
        return dp[idx][amo]=a+b;
    }
    int change( int amount,vector<int>& coins) {
    int n=coins.size();
     vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
     int ans=coch(0,coins,amount,dp);
     return ans;
    }
};