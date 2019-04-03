class Solution
{
public:
	int largestSumAfterKNegations(vector<int> &A, int K)
	{
		int sum = 0;
		if (K == 0)
		{
			for (int i = 0; i < A.size(); ++i)
			{
				sum += A[i];
			}
			return sum;
		}
		sort(A.begin(), A.end());
		for (int i = 0; i < A.size(); ++i)
		{
			if (K > 0 && A[i] <= 0)
			{
				K--;
				A[i] = -A[i];
			}
			if (K == 0)
			{
				for (int i = 0; i < A.size(); ++i)
				{
					sum += A[i];
				}
				return sum;
			}
		}
		sort(A.begin(), A.end());
		while (K > 0)
		{
			A[0] = -A[0];
			K--;
		}
		for (int i = 0; i < A.size(); ++i)
		{
			sum += A[i];
		}
		return sum;
	}
};