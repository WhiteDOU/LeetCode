
class Solution
{
public:
	int findJudge(int N, vector<vector<int>> &trust)
	{
		if (trust.size() < N - 1)
			return -1;
		int *trustOther = new int[N + 1];
		int *beTrust = new int[N + 1];
		for (int i = 0; i <= N; ++i)
		{
			trustOther[i] = 0;
			beTrust[i] = 0;
		}

		for (int i = 0; i < trust.size(); ++i)
		{
			trustOther[trust[i][0]]++;
			beTrust[trust[i][1]]++;
		}
		for (int i = 1; i <= N ; ++i)
		{
			if (trustOther[i] == 0 && beTrust[i] == N - 1)
				return i;
		}

		return  -1;

	}
};
