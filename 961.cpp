
class Solution
{
public:
	int repeatedNTimes(vector<int> &A)
	{
		map<int, int> mp;
		if (A.size() == 0)
			return 0;
		for (int i = 0; i < A.size(); ++i)
		{
			if (mp.find(A[i]) == mp.end())
				mp[A[i]] = 1;
			else
			{
				mp[A[i]]++;
			}
		}
		for (auto i : mp)
		{
			if (i.second == A.size() / 2)
				return i.first;
		}
		return 0;
	}
};
