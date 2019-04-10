class Solution
{
public:
	bool canVisitAllRooms(vector<vector<int>> &rooms)
	{
		queue<int> Q;
		int n = rooms.size();
		vector<bool> visit(n, false);
		Q.push(0);
		visit[0] = true;
		while (!Q.empty())
		{
			int temp = Q.front();
			Q.pop();
			visit[temp] = true;
			for (int i = 0; i < rooms[temp].size(); ++i)
			{
				if (!visit[rooms[temp][i]])
				{
					Q.push(rooms[temp][i]);
					visit[rooms[temp][i]] = true;
				}
			}
		}
		for (int i = 0; i < rooms.size(); ++i)
		{
			if (visit[i] == false)
				return false;
		}
		return true;

	}
};

class Solution
{
public:

	bool canVisitAllRooms(vector<vector<int>> &rooms)
	{
		int n = rooms.size();
		vector<bool> visit(n, false);
		dfs(0, visit, rooms);
		for (int i = 0; i < n; ++i)
		{
			if (visit[i] == false)
				return false;
		}
		return true;


	}

	void dfs(int x, vector<bool> &temp, vector<vector<int>> room)
	{
		temp[x] = true;
		for (int i = 0; i < room[x].size(); ++i)
		{
			if (!temp[room[x][i]])
				dfs(room[x][i], temp, room);
		}
	}
};