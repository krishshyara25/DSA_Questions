class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long ans = 0;
        if(x < 0) return false;
        while(num != 0){
            int mod = num%10;
            ans = ans*10 + mod;
            num = num/10;
        }

        return ans==x;        
    }
};