class Solution
{
public:
	void sortColors(vector<int> &nums)
	{
		vector<int> color(3, 0);
		for (int i = 0; i < nums.size(); ++i)
		{
			color[nums[i]]++;
		}
		for (int i = 0; i < nums.size(); ++i)
		{
			if (color[0])
			{
				nums[i] = 0;
				color[0]--;
			} else if (color[1])
			{
				nums[i] = 1;
				color[1]--;
			} else if (color[2])
			{
				nums[i] = 2;
				color[2]--;
			}
		}
	}
};