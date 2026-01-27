class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;
        int i = 0;
        for (int j = 0; j < haystack.size(); j++) {
            if (haystack[j] == needle[i]) {
                i++;
                if (i == needle.size()) {
                    return j - needle.size() + 1;
                }
            } else {
                j = j - i;
                i = 0;
            }
        }

        return -1;
    }
};
