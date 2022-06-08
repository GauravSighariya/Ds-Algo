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
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size(), low = matrix[0][0], high = matrix[n-1][n-1], mid, count = 0;
        while(low<=high){
            mid = (low+high)/2;
            count = 0;
            for(int i=0;i<n;i++){
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid)-matrix[i].begin();
            }
            if(count>=k)
                high = mid-1;
            else
                low = mid+1;
        }
        return low;
    }
};
