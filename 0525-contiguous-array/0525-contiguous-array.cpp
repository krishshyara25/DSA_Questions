class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int maxlength = 0;
        int sum = 0;
        mp[0] = -1;

        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                sum--;
            }else{
                sum++;
            }
            if(mp.count(sum)){
                maxlength = max(maxlength, i - mp[sum]);
            }else{
                mp[sum] = i;
            }
        }
        return maxlength;
    }
};