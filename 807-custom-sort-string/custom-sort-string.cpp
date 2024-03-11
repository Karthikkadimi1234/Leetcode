class Solution {
public:
     string customSortString(string o, string s) {
        // Count occurrences of each character in s
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        
        // Create a vector to store characters in the custom order
        vector<char> v;
        // Populate the vector with characters in the custom order
        for (char c : o) {
            while (count[c - 'a']-- > 0) {
                v.push_back(c);
            }
        }
        
        // Append remaining characters not present in order
        for (int i = 0; i < 26; i++) {
            while (count[i]-- > 0) {
                v.push_back('a' + i);
            }
        }
        
        // Construct the output string from the vector
        string ns(v.begin(), v.end());
        return ns;
    }
};