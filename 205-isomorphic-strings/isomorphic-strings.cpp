class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if (s.length() != t.length())
        return false;

    unordered_map<char, char>mp;
    unordered_set<char> mpc ;

    for (int i = 0; i < s.length(); ++i) {
        if (mp.find(s[i]) != mp.end()) {
            if (mp[s[i]] != t[i])
                return 0;
        } else {
            if (mpc.find(t[i]) != mpc.end())
                return 0;
            mp[s[i]] = t[i];
        }
    }
    unordered_map<char, char>mpp;
    unordered_set<char> mpcp ;

    for (int i = 0; i < t.length(); ++i) {
        if (mpp.find(t[i]) != mpp.end()) {
            if (mpp[t[i]] != s[i])
                return 0;
        } else {
            if (mpcp.find(s[i]) != mpcp.end())
                return 0;
            mpp[t[i]] = s[i];
        }
    }
    return 1;
    }
};      