class Solution {
public:
	bool divisorGame(int N) {
		bool dp[1001] = {0};
		for (int i = 2; i <= N ; ++i)
		{
			for (int j = 1; j <=i/2 ; ++j)
			{
				if (i % j == 0 && !dp[i-j])
				{
					dp[i] = true;
					break;
				}
			}
		}
		return dp[N];
		
	}
};
