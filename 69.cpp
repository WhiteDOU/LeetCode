class Solution
{
public:
	int mySqrt(int x)
	{
		if (x == 0)
			return 0;
		long long ans;
		long long l = 1, r = x;
		while (l <= r)
		{
			long long mid = (r + l) >> 1;
			long long temp = mid * mid;
			long long next = (mid + 1) * (mid + 1);
			if (temp == x || (next > x && temp < x))
			{
				ans = mid;
				break;
			} else if (temp > x)
			{
				r = mid - 1;
			} else
			{
				l = mid + 1;
			}
		}
		return ans;

	}

};