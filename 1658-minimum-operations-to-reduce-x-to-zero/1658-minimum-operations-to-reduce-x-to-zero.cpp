class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = 0;
        int sum = 0;
        for(int i : nums) {
            total += i;
        }
        int target = total - x;
        if(target < 0)
            return -1;
        int i = 0, j = 0;
        int maxlength = -1;

        for(j = 0; j < n; j++) {
            sum += nums[j];
            while(i <= j && sum > target) {
                sum -= nums[i];
                i++;
            }
            if(sum == target) {
                maxlength = max(maxlength, j - i + 1);
            }
        }
        if(maxlength == -1)
            return -1;

        return n - maxlength;
    }
};