#include <vector>
#include <climits>

class Solution {
public:
    int shortestSubarray(std::vector<int>& nums, int k) {
        int min_len = INT_MAX;
   
        for (int i = 0; i < nums.size(); ++i) {
            int sum = 0;
            
            
            for (int j = i; j < nums.size(); ++j) {
                sum += nums[j];
                
               
                if (sum >= k) {
                    min_len = min(min_len, j - i + 1);
                    break;  
                }
            }
        }

        return min_len == INT_MAX ? -1 : min_len;
    }
};
