class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> avg;
        sort(nums.begin(), nums.end());

        while(!nums.empty()){
            double avgnum = (nums[0] + nums.back()) / 2.0;
            avg.push_back(avgnum);

            nums.pop_back();
            nums.erase(nums.begin());
        }

        return *min_element(avg.begin(), avg.end());
    }
};