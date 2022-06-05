#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int Xor = 0;
        vector<int> ans;
        int x =0;
        int y =0;
        int set_bit_no;
        for(int i=0;i<nums.size();i++){
            Xor = Xor^nums[i];
        }
        
        set_bit_no = Xor & ~(Xor-1);
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] & set_bit_no){
                x = x^nums[i];
            }
            else
                y = y^nums[i];
        }
        ans.push_back(x);
        ans.push_back(y);
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
