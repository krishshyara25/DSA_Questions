class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int slargest = -1;

        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                int num = s[i] - '0';
                if(num > largest){
                    slargest = largest;
                    largest = num;
                }
                else if(num < largest && num > slargest){
                    slargest = num;
                }
            }
        }
        return slargest;
    }
};