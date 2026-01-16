class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for (int x : nums1) {
            int ans = -1;
            bool found = false;

            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == x) {
                    found = true;
                } 
                else if (found && nums2[i] > x) {
                    ans = nums2[i];
                    break;
                }
            }

            result.push_back(ans);
        }

        return result;
    }
};
