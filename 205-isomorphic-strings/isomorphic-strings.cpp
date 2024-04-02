class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if (s.length() != t.length())
        return false;

    unordered_map<char, char>mp;
    for (int i = 0; i < s.length(); ++i) {
        if (mp.find(s[i]) != mp.end()) {
            if (mp[s[i]] != t[i])
                return 0;
        } else {
            mp[s[i]] = t[i];
        }
    }
    unordered_map<char, char>mpp;
    for (int i = 0; i < t.length(); ++i) {
        if (mpp.find(t[i]) != mpp.end()) {
            if (mpp[t[i]] != s[i])
                return 0;
        } else {
            mpp[t[i]] = s[i];
        }
    }
    return 1;
    }
};      