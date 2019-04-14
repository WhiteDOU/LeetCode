class Solution {
public:
	int arrangeCoins(int n) {
		if (n == 0)
			return 0;
		if(n == 1)
			return 1;
		int ans= 0;
		for (int i = 1; i <= n; ++i)
		{
			if (n-i>=0)
			{
				n-=i;
				ans++;
			} else
				break;

		}
		return ans;
	}
};
