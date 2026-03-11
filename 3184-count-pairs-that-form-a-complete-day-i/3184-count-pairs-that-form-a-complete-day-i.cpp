class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int day = 0;
        for(int i = 0;i<hours.size();i++){
            for(int j = i;j<hours.size();j++){
                if(i==j) continue;
                if((hours[i] + hours[j]) % 24 == 0){
                    day++;
                }
            }
        }
        return day;
    }
};