
class NumArray
{
public:
	vector<int> temp;

	NumArray(vector<int> &nums)
	{
		temp = nums;
	}

	int sumRange(int i, int j)
	{
		if (temp.size() == 0)
			return 0;
		vector<int> sum(temp.size(), 0);
		sum[0] = temp[0];
		for (int i = 1; i < temp.size(); ++i)
		{
			sum[i] = sum[i - 1] + temp[i];
		}
		int res = 0;
		if (i == 0)
			res = sum[j];
		else
			res = sum[j] - sum[i - 1];
		return res;
	}
};