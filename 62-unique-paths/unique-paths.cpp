class Solution {
public:
    int grid(int i ,int j,int m ,int n,vector<vector<int>> &dp)
    {
        if(i>=m || j>=n) return 0;
        if(i==m-1 and j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid(i,j+1,m,n,dp)+grid(i+1,j,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return grid(0,0,m,n,dp);
    }
};