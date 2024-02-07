class Solution {
public:
bool static comp(pair<int, char>a, pair<int, char>b){
    return a.first > b.first;
}
    string frequencySort(string s) {
        
        unordered_map<char,int>mp;
        for(auto it:s) mp[it]++;
       vector<pair<int, char>>v;
    for(auto x: mp){
        v.push_back(make_pair(x.second, x.first));
    }
    sort(v.begin(), v.end(), comp);
    string str;
    for(int i=0;i<v.size();i++){
       str.append(v[i].first, v[i].second);
    }

    return str;
    }
};