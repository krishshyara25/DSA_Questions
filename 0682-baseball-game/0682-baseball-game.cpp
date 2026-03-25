class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i] == "C"){
                st.pop();
            }else if(operations[i] == "D"){
                st.push( st.top()*2);
            }else if(operations[i] == "+"){
                int top1 = st.top();
                st.pop();
                int sum = top1 + st.top();
                st.push(top1);
                st.push(sum);
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int totalsum = 0;
        while(!st.empty()){
            totalsum += st.top();
            st.pop();
        }
        return totalsum;
    }
};