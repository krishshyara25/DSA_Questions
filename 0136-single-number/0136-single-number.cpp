class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int i : nums) map[i]++;
        for(auto &p : map){
            if(p.second == 1){
                return p.first;
            }
        }
        return -1;
    }
};