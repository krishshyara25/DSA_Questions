class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size();
        int column = mat[0].size();
        int sum = 0;

        for(int i = 0;i<row;i++){
            for(int j = 0;j<column;j++){
                if(i == j){
                    sum += mat[i][j];
                }else if(i + j == row-1){
                    sum += mat[i][j];
                }
            }
        }
        // sum -= mat[row/2][column/2];
        return sum;
    }
};