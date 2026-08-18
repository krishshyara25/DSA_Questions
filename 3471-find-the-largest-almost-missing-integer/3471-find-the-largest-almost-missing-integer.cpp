class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

        int largest = INT_MIN;
        int n = nums.size();
        if (k == 1) {
            unordered_map<int, int> freq;
            for (int x : nums) {
                freq[x]++;
            }
            for (int x : nums) {
                if (freq[x] == 1) {
                    largest = max(largest, x);
                }
            }
            return largest == INT_MIN ? -1 : largest;
        }

        int count1 = 0;
        int count2 = 0;
        for (int i = 0; i < n; i++) {
            largest = max(nums[i], largest);
            if (nums[i] == nums[0])
                count1++;
            if (nums[i] == nums[n - 1])
                count2++;
        }

        if (k == n) {
            return largest;
        }
        else if (count1 != 1 && count2 == 1) {
            return nums[n - 1];
        }
        else if (count1 == 1 && count2 != 1) {
            return nums[0];
        }
        else if (count1 == 1 && count2 == 1) {
            return max(nums[0], nums[n - 1]);
        }
        else {
            return -1;
        }
    }
};