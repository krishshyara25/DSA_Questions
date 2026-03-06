class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        
        for (int i = 0; i < n; i++) {
            int start = i;
            
            while (i < n && title[i] != ' ') {
                title[i] = tolower(title[i]);
                i++;
            }
            
            int wordLength = i - start;
            if (wordLength > 2) {
                title[start] = toupper(title[start]);
            }
        }
        
        return title;
    }
};