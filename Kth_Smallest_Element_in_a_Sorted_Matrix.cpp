Kth Smallest Element in a Sorted Matrix:
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>nums;
        int ans;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                    nums.push_back(matrix[i][j]);
                
            }
        }
        sort(nums.begin(),nums.end());
        
    return nums[k-1];
        
    }
};
-------------------------------------------------------------------
Binary Search
-------------------------------------------------------------------
