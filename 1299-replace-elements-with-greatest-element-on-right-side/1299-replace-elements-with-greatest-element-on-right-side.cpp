class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int rightmax = -1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>rightmax){
                    rightmax = arr[j];
                }
            }
            arr[i] = rightmax;
        }
        return arr;
    }
};