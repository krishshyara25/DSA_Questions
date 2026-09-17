class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        long long max = INT_MIN;
        long long secmax = INT_MAX;
        int index;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] > max){
                secmax = max;
                max = nums[i];
                index = i;
            }else if(nums[i] < max && nums[i] > secmax){
                secmax = nums[i];
            }
        }
        if(secmax * 2 <= max) return index;
        return -1;
    }
};