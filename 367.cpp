class Solution
{
public:
	bool isPerfectSquare(int num)
	{
		if (num == 0 || num == 1)
			return true;

		long long mid;
		long long left = 0;
		long long right = num;
		long long p;

		while (left <= right)
		{
			mid = (left + right) >> 1;
			p = mid * mid;
			if (p == num)
				return true;
			else if (p < num)
				left = mid + 1;
			else
				right = mid - 1;
		}
		return false;

	}
};
