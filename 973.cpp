
class Solution
{
public:
	vector<vector<int>> kClosest(vector<vector<int>> &points, int K)
	{
		int len = points.size();
		vector<Point> temp(points.size());
		for (int i = 0; i < points.size(); ++i)
		{
			temp[i].x  = points[i][0];
			temp[i].y = points[i][1];
			temp[i].length = sqrt(temp[i].x * temp[i].x + temp[i].y * temp[i].y);
		}
		sort(temp.begin(), temp.end());
		vector<vector<int>> ans;
		for (int i = 0; i < temp.size(); ++i)
		{
			if (K!=0)
			{
				vector<int> tp(2);
				tp[0] = temp[i].x;
				tp[1] = temp[i].y;
				ans.push_back(tp);
				K--;
			} else
				break;
		}
		return ans;
	}

	struct Point
	{
		int x;
		int y;
		double length;

		bool operator<(const Point &p) const
		{
			return length < p.length;
		}
	};
};