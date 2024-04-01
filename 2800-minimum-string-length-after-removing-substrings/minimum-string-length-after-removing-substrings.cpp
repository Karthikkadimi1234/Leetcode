class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(!st.empty() and st.top()=='A')
            {
                if(s[i]=='B') st.pop();
                else st.push(s[i]);
            }
            else if(!st.empty() and st.top()=='C')
            {
                if(s[i]=='D') st.pop();
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }
        return st.size();
    }
};