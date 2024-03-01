class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=0,z=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')c++;
            else z++;
        }
        cout<<c<<" "<<z<<" ";
      string  st="" ;
        while(c-1>0)
        {
            st+='1';
            c--;
        }
        while(z>0)
        {
            st+='0';
            z--;
        }
        st+='1';
        return st;
    }
};
