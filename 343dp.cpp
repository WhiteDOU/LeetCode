
class Solution
{
public:
	int integerBreak(int n)
	{
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		if (n == 2)
			return 1;
		vector<int> dp(n + 1, 0);
		dp[1] = 1;
		dp[2] = 1;
		for (int i = 3; i <= n; ++i)
		{
			dp[i] = -1;
			for (int j = 1; j < i; ++j)
			{
				dp[i] = max(j * dp[i - j], max(dp[i], j * (i - j)));
			}
		}
		return dp[n];
	}
};

class Solution {
public:
	int integerBreak(int n) {
		if(n == 2)
			return 1;
		else if(n == 3)
			return 2;
		else if(n%3 == 0)
			return pow(3, n/3);
		else if(n%3 == 1)
			return 2 * 2 * pow(3, (n - 4) / 3);
		else 
			return 2 * pow(3, n/3);
	}
};