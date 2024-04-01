class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        for(int i=s.size();i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(c==1) continue;
                else break;
            }
            else 
            {
                cout<<s[i];
                c+=1;
            }
        }
        return c-1;
    }
};