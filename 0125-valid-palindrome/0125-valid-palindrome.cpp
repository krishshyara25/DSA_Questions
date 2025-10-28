class Solution {
public:
    bool isPalindrome(string s) {
        string reversed = "";
        string newstr;
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])){
                reversed.push_back(tolower(s[i]));
            }
        }
        newstr = reversed;
        reverse(reversed.begin(), reversed.end());
        return reversed == newstr;
    }
};