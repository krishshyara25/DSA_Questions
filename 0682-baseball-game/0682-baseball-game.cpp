class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0; i<operations.size(); i++){
            int sum = 0;
            if(operations[i] == "C"){
                st.pop();
            }else if(operations[i] == "D"){
                st.push( st.top()*2);
            }else if(operations[i] == "+"){
                int temp = st.top();
                sum += temp;
                st.pop();
                sum += st.top();
                st.push(temp);
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