class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>neg;
        vector<int>merge;
        for(auto it:nums)
        {
            if(it>=0)
            {
                neg.push_back(it);
            }
        }
          for(auto it:nums)
        {
            if(it<0)
            {
                neg.push_back(it);
            }
        }
        int n=neg.size();
        int i=0,j=n/2;
        while(i<n/2 and j<n)
        {
            merge.push_back(neg[i]);
            merge.push_back(neg[j]);
            i++;
            j++;
        }
        return merge;
    }
};