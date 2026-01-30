class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        for(int i = 0;i<candies.size();i++){
        int count = 0;
            for(int j = 0;j<candies.size();j++){
                if(i == j) continue;
                if(candies[i]+extraCandies >= candies[j]){
                    count++;
                }
            }
            if(count == candies.size()-1) ans[i] = true;
            else ans[i] = false;
        }
        return ans;
    }
};