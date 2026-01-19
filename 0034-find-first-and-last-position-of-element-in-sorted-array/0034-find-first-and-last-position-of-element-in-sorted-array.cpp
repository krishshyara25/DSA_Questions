class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = firstocc(nums,target);
        int right = lastocc(nums,target);
        return {left,right};
    }

    int firstocc(vector<int> nums , int target){
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(target == nums[mid]){
                ans = mid;
                right = mid - 1;
            }else if(target < nums[mid]){
                right = mid - 1;
            }else if(target > nums[mid]){
                left = mid + 1;
            }
        }
        return ans;
    }

    int lastocc(vector<int> nums , int target){
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(target == nums[mid]){
                ans = mid;
                left = mid + 1;
            }else if(target < nums[mid]){
                right = mid - 1;
            }else if(target > nums[mid]){
                left = mid + 1;
            }
        }
        return ans;
    }
};