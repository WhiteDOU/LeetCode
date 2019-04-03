
class Solution
{
public:
	int smallestRangeI(vector<int> &A, int K)
	{
		int Min = A[0];
		int Max = A[0];
		for (int i = 1; i < A.size(); ++i)
		{
			if (A[i] > Max)
				Max = A[i];
			if (A[i] < Min)
				Min = A[i];
		}
		return max(Max - Min - 2 * K, 0);
	}
};