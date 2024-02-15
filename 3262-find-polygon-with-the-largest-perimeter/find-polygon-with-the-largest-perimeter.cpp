class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n=nums.size();
        long long prefix[n+1];
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=nums[i]+prefix[i-1];
        }
        for(int i=0;i<n;i++)
        {
            cout<<prefix[i]<<" ";
        }
        for(int i=n-1;i>0;i--)
        {
            if(nums[i]<prefix[i-1])
            {
                return prefix[i];
            }
        }
        return -1;
    }
};