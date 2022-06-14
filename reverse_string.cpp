string Solution::solve(string A) {
    string ans = "";
    A.push_back(' ');
    int i = 0, n = A.size(), j = 0;
    while(i < n) {
        while(j < n && A[j] != ' ') ++j;
        string s = A.substr(i, j - i);
        if(s.size())  ans = s + " " + ans;
        i = j + 1;
        j++;
    }
    ans.pop_back();
    return ans;
}
