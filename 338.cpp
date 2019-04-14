class Solution
{
public:
	vector<int> countBits(int num)
	{
		vector<int> ans;
		for (int i = 0; i <= num; ++i)
		{
			ans.push_back(cnt(i));   
		}
		return ans;
	}

	int cnt(int n)
	{
		int sum = 0;
		while (n)
		{
			sum += (n % 2);
			n = n >> 1;
		}
		return sum;
	}
};

class Solution
{
public:
	vector<int> countBits(int num)
	{
		vector<int> ans(num+1,0);
		for (int i = 1; i <=num ; ++i)
		{
			ans[i] = ans[i&(i-1)]+1;
		}
		return ans;
	}
};