class Solution
{
public:
	bool canPartitionKSubsets(vector<int> &nums, int k)
	{
		if (nums.size() == 0 && k == 0)
			return false;
		int sum = 0;
		for (int i = 0; i < nums.size(); ++i)
		{
			sum += nums[i];
		}
		if (sum % k != 0)
			return false;
		vector<bool> visit(nums.size(), false);
		return dfs(nums,k,sum/k,0,0,visit);
	}

	bool dfs(vector<int>& nums,int k,int target,int start,int curSum,vector<bool>& visited)
	{
		if (k == 1)
			return true;
		else if(curSum > target)
			return false;
		else if (curSum == target)
			return dfs(nums,k-1,target,0,0,visited);
		else
		{
			for (int i = start; i <nums.size() ; ++i)
			{
				if (visited[i] == false)
				{
					visited[i] = true;
					if (dfs(nums,k,target,i+1,curSum+nums[i],visited))
						return true;
					visited[i] = false;
				}
			}
			return false;
		}
	}
};