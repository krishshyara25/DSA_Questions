class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int min = nums[0];
        int max = nums[n - 1];
        vector<int>ans;
        int j = 0;
        for(long i=min;i<=max;i++){
            if(i == nums[j] && j<nums.size()){
                j++;
            }else{
                ans.push_back(i);
            }
        }
return ans;
    }
};