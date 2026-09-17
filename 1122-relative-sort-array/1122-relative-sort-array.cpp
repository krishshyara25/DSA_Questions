class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>ans;
        int n1 = arr1.size();
        int n2 = arr2.size();
        for(int i = 0;i<n1;i++){
            mp[arr1[i]]++;
        }
        for(int i = 0; i < n2; i++) {
            while(mp[arr2[i]] > 0) {
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }

        for(auto p : mp) {
            while(p.second > 0) {
                ans.push_back(p.first);
                p.second--;
            }
        }
        return ans;
    }
};