class Solution {
public:
   static bool cmp(pair<int,int>&p1 ,pair<int,int>&p2)
    {
        if (p1.first == p2.first) {
            return p1.second > p2.second;
        }
        return p1.first < p2.first;
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp)
        {
            v.push_back(make_pair(it.second,it.first));
        }
        sort(v.begin(),v.end(),cmp);
        int cnt=0;
        for(auto it:v)
        {
            if(it.first<=k)
            {
                k=k-it.first;
                cnt++;
            }
            else
            {
                break;
            }
        }
        return v.size()-cnt;
    }
};