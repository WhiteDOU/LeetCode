class Solution {
public:
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		vector<int> temp;
		int M=nums.size(), N=nums[0].size();
		if(M*N!=r*c) return nums;
		for (int i = 0; i < nums.size(); ++i)
		{
			for (int j = 0; j < nums[0].size(); ++j)
			{
				temp.push_back(nums[i][j]);
			}
		}
		int index = 0;
		vector<vector<int>> res(r,vector<int>(c,0));
		for (int i = 0; i < res.size(); ++i)
		{
			for (int j = 0; j < res[0].size(); ++j)
			{
				res[i][j] = temp[index++];
			}
		}
		return res;
	}
};