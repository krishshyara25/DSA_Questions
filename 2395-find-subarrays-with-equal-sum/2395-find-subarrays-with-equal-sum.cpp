class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size-1;j++){
                if(nums[j] + nums[j+1] == nums[i] + nums[i+1])
                    count++;
            }
        }
        return count>0;
    }
};

