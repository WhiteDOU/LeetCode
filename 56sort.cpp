class Solution {
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals) {
		vector<vector<int>> ans;
		if (intervals.size()==0)
			return ans;
		sort(intervals.begin(),intervals.end(),cmp);
		int len = intervals.size();
		vector<int> cur = intervals[0];
		for (int i = 1; i < len; ++i)
		{
			if (cur[1]>=intervals[i][0])
				cur[1] = max(cur[1],intervals[i][1]);
			else
			{
				ans.push_back(cur);
				cur[0] = intervals[i][0];
				cur[1] = intervals[i][1];
			}
		}
		ans.push_back(cur);
		return ans;
	}
	static bool cmp(vector<int>& t1,vector<int>& t2)
	{
		return t1[0] < t2[0];
	}
};
