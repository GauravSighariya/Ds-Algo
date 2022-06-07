class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans;
        for(int i=0;i<letters.size();i++){
            if(int(target) < int(letters[i]))
            {
                
                return letters[i];

            }
            
        }
    return letters[0];
    }
};
----------------------------------------------------------------------------
Binary Search
----------------------------------------------------------------------------
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int h = letters.size()-1;
        char res = '#';
        while(l<=h){
            int mid = l + (h - l)/2;
            
            if(letters[mid] == target){
                l = mid + 1;
            }
            else if(letters[mid] > target){
                res = letters[mid];
                h = mid-1;
                
            }
            else
                l = mid+1;
                
        }
    if(res=='#') return letters[0];
    return res;
    }
};
