class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxVal = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
            }
        }
        int sum = 0;
        while (k > 0) {
            sum += maxVal;
            maxVal++;
            k--;
        }

        return sum;
    }
};
