class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string s = "";
        vector<int> ans;
        for(int i=0; i<digits.size(); i++){
            s+= to_string(digits[i]);
        }
        int num = stoi(s) + 1;
        while(num!=0){
            int digit = num % 10;
            ans.push_back(digit);
            num = num/10;
        }
        reverse(ans.begin(), ans.end());
        return ans;    
    }
};