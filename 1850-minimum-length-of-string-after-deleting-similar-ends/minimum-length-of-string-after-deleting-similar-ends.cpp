class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        if(s[i]!=s[j]) return s.size()-i;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                while(s[i]==s[i+1] and i<j) i++;
                while(s[j]==s[j-1] and j>i) j--;
                if(i>=j) return 0;
                i++;
                j--;
            }
            else break;
        }
        return j-i+1;
    }
};