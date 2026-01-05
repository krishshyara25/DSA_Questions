class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=1;i<s.size();i++){
            int start = 0;
            int end = s.size()-1;
            while(start < end){
                swap(s[start],s[end]);
                start++;end--;
            }
            start = 0;
            end = i-1;
            while(start < end){
                swap(s[start],s[end]);
                start++;end--;
            }
            start = i;
            end = s.size()-1;
            while(start < end){
                swap(s[start],s[end]);
                start++;end--;
            }
            if(s == goal) return true;
        }
        return false;
    }
};