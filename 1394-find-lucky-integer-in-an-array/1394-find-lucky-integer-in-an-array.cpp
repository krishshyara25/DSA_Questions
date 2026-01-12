class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        int lucky = 0;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto &p : mp){
            if(p.first == p.second){
                if(lucky < p.second) lucky = p.second;
            };
        }
        if(lucky == 0) return -1;
        return lucky;
    }
};