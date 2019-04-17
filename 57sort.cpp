class Solution {
public:
	static bool cmp(vector<int>& v1,vector<int>& v2)
	{
		return v1[0]<v2[0];
	}
	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
		vector<vector<int>> ans;
		if (intervals.size()==0)
		{
			ans.push_back(newInterval);
			return ans;
		}
		intervals.push_back(newInterval);
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
};