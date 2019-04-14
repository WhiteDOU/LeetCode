
class Solution
{
public:
	vector<string> letterCasePermutation(string S)
	{
		vector<string> ans;
		dfs(ans, S, 0);
		return ans;
	}

	void dfs(vector<string> &ans, string &s, int i)
	{
		if (i == s.size())
		{
			ans.push_back(s);
			return;;
		}
		dfs(ans, s, i + 1);
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			dfs(ans, s, i + 1);
		} else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
			dfs(ans,s,i+1);
		}

	}

};