class Solution {
public:
    void markRow(vector<vector<int>> &matrix,int m,int n,int i){
        for(int j=0;j<n;j++){
            if(matrix[i][j]!=0)
                matrix[i][j]=-999999;
        }
    }

    void markCol(vector<vector<int>> &matrix,int m,int n,int j){
        for(int i=0;i<m;i++){
            if(matrix[i][j]!=0)
                matrix[i][j]=-999999;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    markRow(matrix,m,n,i);
                    markCol(matrix,m,n,j);
                }
            }
        }


        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-999999)
                    matrix[i][j]=0;
            }
        }
    }
};
