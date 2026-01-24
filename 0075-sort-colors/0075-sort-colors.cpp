class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st = 0;
        int end = nums.size() - 1;
        
        for(int i = 0;i<=end;i++){
            if(nums[i] == 0){
                swap(nums[st],nums[i]);
                st++;
            }else if(nums[i] == 2){
                swap(nums[end],nums[i]);
                end--;
                i--;
            }
        }
    }
};