class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>map;
        int count = 0;
        for(int i : nums){
            map[i]++;
        }
        for(auto &p : map){
            if(p.second > 0){
                count += p.second*(p.second-1) / 2;
            }
        }
        return count;
    }
};