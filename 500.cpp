class Solution
{
public:
	vector<string> findWords(vector<string> &words)
	{
		vector<char> v1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
		set<char> row1(v1.begin(), v1.end());

		vector<char> v2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
		set<char> row2(v2.begin(), v2.end());

		vector<char> v3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
		set<char> row3(v3.begin(), v3.end());
		vector<string> ans;
		if (words.size() == 0)
			return ans;
		for (auto word :words)
		{
			int one = 0, two = 0, three = 0;
			for (char c : word)
			{
				if (c < 'a')
					c += 32;
				if (row1.count(c))
					one = 1;
				if (row2.count(c))
					two = 1;
				if (row3.count(c))
					three = 1;
				if (one + two +three > 1)
					break;

			}
			if (one + two + three == 1)
				ans.push_back(word);
		}
		return ans;
	}
};