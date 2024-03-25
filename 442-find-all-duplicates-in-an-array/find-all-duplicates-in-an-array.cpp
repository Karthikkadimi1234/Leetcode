class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(it.second==2)
            {
                v.push_back(it.first);
            }
        }
        return v;
    }
};