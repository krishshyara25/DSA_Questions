class Solution {
public:
    int minimumChairs(string s) {
        int chair = 0;
        int minC = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == 'E'){
                chair++;
            }else if(s[i] == 'L'){
                chair--;
            }
            minC = max(minC,chair);
        }
        return minC;
    }
};