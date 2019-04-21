class Solution
{
public:
	string longestPalindrome(string s)
	{
		string res = s.substr(0, 1);
		int length = 1;
		int len = s.size();
		vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
		for (int i = 0; i < len; ++i)
		{
			dp[i][i] = true;
			if (i != len && s[i] == s[i + 1])
			{
				dp[i][i + 1] = true;
				length = 2;
				res = s.substr(i, 2);
			}
		}
		for (int i = s.length() - 2; i >= 0; --i)
		{
			for (int j = i + 2; j < s.length(); ++j)
			{
				if (dp[i + 1][j - 1] && s[i] == s[j])
				{
					dp[i][j] = true;
					if (j - i + 1 > length)
					{
						length = j - i + 1;
						res = s.substr(i, length);
					}
				} else dp[i][j] = false;
			}
		}
		return res;
	}
};
