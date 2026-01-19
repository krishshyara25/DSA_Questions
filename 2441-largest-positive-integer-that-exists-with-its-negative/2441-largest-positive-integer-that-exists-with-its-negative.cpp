class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;
        int target = 0;
        int maxi = -1;

        for(int i = 0;i<nums.size();i++){
            mp[nums[i]] = i;
        }

        for(int i = 0;i<nums.size();i++){
            target = 0 - nums[i];
            if(mp.find(target) != mp.end()){
                maxi = max(maxi,abs(nums[i]));
            } 
        }
        return maxi;

    }
};