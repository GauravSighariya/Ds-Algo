void Solution::merge(vector<int> &a, vector<int> &b) {
    
    
	for(int i=0;i<b.size();i++){
		a.push_back(b[i]);
	}
	sort(a.begin(),a.end());
	
}
