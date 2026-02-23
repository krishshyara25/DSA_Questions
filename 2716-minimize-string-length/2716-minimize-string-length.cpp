class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int>mp;
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count = 0;
        return mp.size();
    }
};