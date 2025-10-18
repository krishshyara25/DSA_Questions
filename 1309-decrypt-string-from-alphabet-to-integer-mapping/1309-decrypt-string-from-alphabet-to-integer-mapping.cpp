class Solution {
public:
    string freqAlphabets(string s) {
        string newstr = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            if(i+2 < n && s[i+2] == '#'){
                int num = (s[i] - '0')*10 + (s[i+1] - '0');
                newstr += ('a' + num-1);
                i += 2;
            }else{
                int num = s[i] - '0';
                newstr += ('a' + num-1);
            }
        }
        return newstr;
    }
};