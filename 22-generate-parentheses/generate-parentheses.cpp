class Solution {
public:
    vector<string>v;
  void gen(int op,int cl,int n,string s)
    {
        if(op==n and cl==n)
        {
            v.push_back(s);
            return;
        }
        if(op<=n)
        {
            gen(op+1,cl,n,s+'(');
        }
        if(op>cl)
        {
            gen(op,cl+1,n,s+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        gen(0,0,n,s);
        return v;
    }
};