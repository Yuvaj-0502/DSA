class Solution{
    public:
      int kthSmallest(vector<vector<int>>&matrix,int k){
         vector<int>result;
         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                result.push_back(matrix[i][j]);
            }
         }
         sort(result.begin(),result.end());
         return result[k-1];
      }
};