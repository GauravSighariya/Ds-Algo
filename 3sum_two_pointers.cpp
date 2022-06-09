int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int n = A.size();
    long long ans = INT_MAX;
    for(int i=0;i<n;i++){
        int j=i+1;int k=n-1;
        while(j<k){
            long long sum = A[i] + A[j] + A[k];
            if(abs(sum - B) < abs(ans - B)){
                ans = sum;
            } 
            if(sum >B){
                k--;
            }
                
            else 
                j++;
                
        }
    }
    return ans;
}
