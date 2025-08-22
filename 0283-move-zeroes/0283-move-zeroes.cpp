class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroindex = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[zeroindex++] = nums[i];
            }
        }
        for(int i=zeroindex;i<nums.size();i++){
            nums[i] = 0;
        }
    }
};