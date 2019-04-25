class Solution {
public:
	int firstUniqChar(string s) {
		map<char,int> mp;
		for(char i : s)
		{
			mp[i]++;
		}
		int ans = -1;
		for (int i = 0; i < s.size(); ++i)
		{
			if (mp[s[i]] == 1)
				return i;
		}
		return ans;
	}
};