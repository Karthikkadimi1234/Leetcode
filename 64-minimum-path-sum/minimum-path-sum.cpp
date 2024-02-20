class Solution {
public:
    int grids(int i,int j,int n,int m,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
         if(i==n-1 and j==m-1) return grid[i][j];
        if(i>=n || j>=m) return 1000;
        if(dp[i][j]!=-1) return dp[i][j];
        int a=INT_MAX,b=INT_MAX;
        a=grid[i][j]+grids(i,j+1,n,m,grid,dp);
        b=grid[i][j]+grids(i+1,j,n,m,grid,dp);
        return dp[i][j]=min(a,b);
    }
    int minPathSum(vector<vector<int>>& grid) {
      int n=grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
      return grids(0,0,n,m,grid,dp);
    }
};