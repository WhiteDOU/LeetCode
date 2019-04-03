
class Solution
{
public:
	int father[1205];

	int findCircleNum(vector<vector<int>> &M)
	{
		init();
		set<int> ans;
		for (int i = 0; i < M.size(); ++i)
		{
			for (int j = 0; j < M.size(); ++j)
			{
				if (M[i][j] == 1 && i != j && findFather(i) != findFather(j))
				{
					Union(i,j);
				}
			}
		}
		for (int i = 0; i < M.size(); ++i)
		{
			   ans.insert(findFather(i));
		}
		return ans.size();

	}

	void init()
	{
		for (int i = 0; i < 1205; ++i)
		{
			father[i] = i;
		}
	}

	int findFather(int x)
	{
		if (father[x] == x)
			return x;
		else
		{
			int temp = findFather(father[x]);
			father[x] = temp;
			return temp;
		}
	}

	void Union(int x, int y)
	{
		int a = findFather(x);
		int b = findFather(y);
		if (a != b)
			father[a] = b;
	}
};
