// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<long long> left(n,-1),right(n,n);
       stack<long long> st1,st2;
       for (int i=0;i<n;i++){
           if (st1.empty()){
               st1.push(i);
               continue;
           }
           while(!st1.empty() && arr[i]<arr[st1.top()]){
               right[st1.top()]=i;
               st1.pop();
           }
           st1.push(i);
       }
       for (int i=n-1;i>=0;i--){
           if (st2.empty()){
               st2.push(i);
               continue;
           }
           while(!st2.empty() && arr[i]<arr[st2.top()]){
               left[st2.top()]=i;
               st2.pop();
           }
           st2.push(i);
       }
       long long ans=0;
       for (int i=0;i<n;i++){
           int len=right[i]-1-(left[i]+1)+1;
           ans=max(ans,len*arr[i]);
       }
       return ans;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
