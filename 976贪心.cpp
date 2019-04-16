class Solution
{
public:
	int largestPerimeter(vector<int> &A)
	{
		if (A.size() < 3)
			return 0;
		if (A.size() == 3 && (A[0] + A[1] <= A[2] || A[0] + A[2] <= A[1] || A[1] + A[2] <= A[0]))
			return 0;
		sort(A.begin(), A.end());
		int len = A.size();
		int ans = 0;
		for (int i = len - 1; i >= 2; --i)
		{
			if (A[i] < A[i - 1] + A[i - 2])
			{
				ans = A[i] + A[i - 1] + A[i - 2];
				break;
			} else
				continue;
		}
		return ans;

	}
};