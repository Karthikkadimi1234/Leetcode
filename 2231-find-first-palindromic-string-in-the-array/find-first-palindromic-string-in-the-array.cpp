class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it:words)
        {
            string k=it;
            reverse(k.begin(),k.end());
            if(k==it) return it;
        }
        return "";
    }
};