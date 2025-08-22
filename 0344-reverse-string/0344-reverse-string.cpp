class Solution {
public:
    void reverseString(vector<char>& s) {
        string revs = "";
    for(int i=0;i<s.size()/2;i++)
            swap(s[i],s[s.size()-i-1]);
    }
};