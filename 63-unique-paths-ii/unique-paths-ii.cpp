class Solution {
public:
    int grid(int i,int j,int m,int n,vector<vector<int>>&grids,vector<vector<int>>&dp)
    {
        if(i>=m || j>=n || grids[i][j]==1) return 0;
        if(i==m-1 && j== n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid(i,j+1,m,n,grids,dp)+grid(i+1,j,m,n,grids,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int m=obstacleGrid.size();
       int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
       return  grid(0,0,m,n,obstacleGrid,dp);
    }
};