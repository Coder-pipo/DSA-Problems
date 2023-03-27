class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int columns=matrix[0].size();

        vector<int> rowMat(rows,-1),colMat(columns,-1);
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(matrix[i][j]==0){
                    rowMat[i]=0;
                    colMat[j]=0;
                }
            }
        }

        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(rowMat[i]==0||colMat[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
