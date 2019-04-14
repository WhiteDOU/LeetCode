class Solution {
public:
	vector<vector<int>> combinationSum3(int k, int n) {
		vector<vector<int>> ans;
		if (k==0||n==0)
			return ans;
		vector<int> candidates = {1,2,3,4,5,6,7,8,9};
		vector<int> solution;
		dfs(ans,solution,candidates,k,n,0,0);
		return ans;

	}
	void dfs(vector<vector<int>>& ans, vector<int>& solution,vector<int>& candidates, int k,int target, int pos, int curr)
	{
		if (solution.size() == k &&curr == target)
		{
			ans.push_back(solution);
			return;
		}
		for (int i = pos; i <candidates.size() ; ++i)
		{
			if (candidates[i] + curr > target || solution.size() >= k)
				return;
			solution.push_back(candidates[i]);
			dfs(ans,solution,candidates,k,target,i+1,curr+candidates[i]);
			solution.pop_back();
		}

	}
};
