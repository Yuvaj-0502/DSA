class Solution{
    public:
       int maxProduct(vector<int>& nums){
              int maxProduct=nums[0];
              int minProduct=nums[0];
              int result=nums[0];

              for(int i=1;i<nums.size();i++){
                if(nums[i]<0){
                    swap(minProduct,maxProduct);
                }
                minProduct=min(nums[i],minProduct*nums[i]);
                maxProduct=max(nums[i],maxProduct*nums[i]);
                result=max(result,maxProduct);
              }
              return result;
       }
};