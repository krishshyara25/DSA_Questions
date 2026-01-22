class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0;
        int r = n - 1;
        int pos = n-1;

        while(l <= r){
            int leftsq = nums[l]*nums[l];
            int rightsq = nums[r]*nums[r];
            if(leftsq > rightsq){
                ans[pos--] = leftsq;
                l++;
            }else{
                ans[pos--] = rightsq;
                r--;
            }
        }
        return ans;
    }
};