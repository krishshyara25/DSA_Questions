class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = nums.size() - 1;
        int k = 0;
        for(int i=0;i<=j;i++){
            if(nums[i] == 0){
                swap(nums[i],nums[k]);
                k++;
            }else if(nums[i] == 2){
                swap(nums[i],nums[j]);
                j--;
                i--;
            }
        }
    }
};