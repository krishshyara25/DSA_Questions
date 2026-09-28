class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string result = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(result);
                result = "";
            } else if (s[i] == ')') {
                reverse(result.begin(), result.end());
                result = st.top() + result;
                st.pop();
            } else {
                result += s[i];
            }
        }
        return result;
    }
};