class Solution {
public:
	int leastInterval(vector<char>& tasks, int n) {
		vector<int> v(26,0);
		for(auto i :tasks)
			v[i-'A']++;
		int imax = *max_element(v.begin(),v.end());
		int ans = (n+1)*(imax-1);
		ans += imax;
		return max((int)tasks.size(),ans);
	}
};