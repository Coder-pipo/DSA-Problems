class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int> ans;
        int m=mat.size();
        int n=mat[0].size();
        int maximum=INT_MIN;
        int indexX,indexY;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]>maximum){
                    maximum=mat[i][j];
                    indexX=i;
                    indexY=j;
                }
            }
        }

        ans.push_back(indexX);
        ans.push_back(indexY);

        return ans;
    }
};
