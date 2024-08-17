class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }

        int row=matrix.size();
        int column=matrix[0].size();

        int i=0;
        int j=column-1;

        while(i<row && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;

    }
};