class Solution {
public:
	string countAndSay(int n) {
		string ans = "1";
		for (int i = 1; i < n ; ++i)
		{
			string tmp = "";
			int cnt = 0;
			char s = ans[0];
			int j = 0;
			int len = ans.size();
			while (j<len)
			{
				if (ans[j]!=s)
				{
					tmp += to_string(cnt);
					tmp +=s;
					s = ans[j];
					cnt = 1;
				} else
				{
					cnt++;
				}
				if (j == len - 1)
				{
					tmp += to_string(cnt);
					tmp += s;
				}
				j++;
			}
			ans = tmp;
		}
		return ans;
	}
};