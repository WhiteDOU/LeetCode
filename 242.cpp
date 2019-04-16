class Solution {
public:
	bool isAnagram(string s, string t) {
		if (s.size() != t.size())
			return false;
		vector<int> s1(26,0);
		int len = s.size();
		for (int i = 0; i < len; ++i)
		{
			s1[s[i] - 'a']++;
		}
		for (int i = 0; i < len; ++i)
		{
			s1[t[i] - 'a']--;
		}
		for (int i = 0; i < 26; ++i)
		{
			if (s1[i]!=0)
				return false;
		}
		return true;
	}
};

class Solution {
public:
	bool isAnagram(string s, string t) {
		sort(s.begin(),s.end());
		sort(t.begin(),t.end());
		return s == t;
	}
};