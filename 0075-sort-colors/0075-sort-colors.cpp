class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = nums.size() - 1;
        int k = 0;
        for(int i=0;i<=j;i++){
            if(nums[i] == 0){
                int temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                k++;
            }else if(nums[i] == 2){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j--;
                i--;
            }
        }
    }
};