class Solution {
public:
    int countSubstrings(string s) {
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            string l="";
            for(int j=i;j<s.size();j++)
            {
                l+=s[j];
                string k=l;
                reverse(k.begin(),k.end());
                if(l==k)
                {
                    c+=1;
                }
            }
        }
        return c;
    }
};