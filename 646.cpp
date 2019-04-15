class Solution
{
public:
	int findLongestChain(vector<vector<int>> &pairs)
	{
		if (pairs.size() == 0)
			return  0;
		if (pairs.size() == 1)
			return 1;
		sort(pairs.begin(),pairs.end(),qcmp);
		int res = 0, min = INT_MIN;
		for (int i = 0; i < pairs.size(); ++i) {
			if (min < pairs[i][0]) min = pairs[i][1], ++res;
		}
		return res;

	}
	static  bool qcmp(const vector<int>& a, const vector<int>& b)
	{
		return a[1]<b[1];
	}


};
