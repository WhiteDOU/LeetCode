class Solution
{
public:
	vector<int> eventualSafeNodes(vector<vector<int>> &graph)
	{
		vector<int> res;
		if (graph.size() == 0)
			return res;
		int size = graph.size();
		vector<int> color(size, 0);
		for (int i = 0; i < size; ++i)
		{
			if (dfs(graph, i, color))
				res.push_back(i);
		}
		return res;
	}

private:
	bool dfs(vector<vector<int>> &graph, int start, vector<int> &color)
	{
		if (color[start] != 0)
			return color[start] == 1;

		color[start] = 2;
		for (int next:graph[start])
		{
			if (!dfs(graph, next, color))
				return false;
		}
		color[start] = 1;
		return true;
	}
};