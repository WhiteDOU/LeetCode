
class Solution
{
public:
	string findLongestWord(string s, vector<string> &d)
	{
		if (s.size() == 0 || d.size() == 0)
			return "";
		sort(d.begin(), d.end(), [](string a, string b)
		{
			if (a.size() == b.size())
				return a < b;
			else
				return a.size() > b.size();
		});
		for (auto i : d)
		{
			int index = 0;
			for (auto j : s)
			{
				if (index < i.size())
				{
					if (j == i[index])
						index++;
				} else break;
			}
			if (index == i.size())
				return i;
		}
		return "";
	}
};