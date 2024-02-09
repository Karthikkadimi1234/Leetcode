class Solution {
public:
    int prev=0;
    vector<int>ans;
    vector<int> fun(int idx,int n,vector<int>&nums,vector<int>&v,vector<int>&dp)
    {
        if(idx>=n)
        {
            if(v.size()>prev)
            {
                prev=v.size();
                ans=v;
            }
            return ans;
        }

        vector<int>pk;
        vector<int>upk;
        
        if( dp[idx]<(int)v.size() and (v.empty() || nums[idx] % v.back()==0))
        {
            dp[idx]=v.size();
            v.push_back(nums[idx]);
            pk=fun(idx+1,n,nums,v,dp);
            v.pop_back();
        }
      upk=fun(idx+1,n,nums,v,dp);
        if(pk.size()>upk.size()) return pk;
        return upk;
    }

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return fun(0,nums.size(),nums,v,dp);
    }
};