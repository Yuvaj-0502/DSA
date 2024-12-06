class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        

        if(m*n!=r*c){
            return mat;
        }
        vector<vector<int>>reshape(r,vector<int>(c));
        for(int i=0;i<m*n;i++){
            reshape[i/c][i%c]=mat[i/m][i%m];
        }
         return reshape; 
    } 
};