

class Solution
{
public:
	int reverse(int x)
	{
		if (x == 0)
			return 0;
		int flag = 0;
		if(x == -INT_MAX-1)
			return 0;
		if (x < 0)
		{
			flag = 1;
			x = -x;
		}
		long long ans = 0;
		while (x)
		{
			int temp = x % 10;
			ans = ans * 10 + temp;
			x /= 10;
		}
		if (ans>INT_MAX||ans<-INT_MAX-1)
			return 0;
		if (flag)
			ans = -ans;
		return (int)ans;
	}

	class Solution
	{
	public:
		int reverse(int x)
		{
			if (x == 0)
				return 0;
			int flag = 0;
			if(x == -INT_MAX-1)
				return 0;
			if (x < 0)
			{
				flag = 1;
				x = -x;
			}
			long long ans = 0;
			while (x)
			{
				int temp = x % 10;
				ans = ans * 10 + temp;
				x /= 10;
			}
			if (ans>INT_MAX||ans<-INT_MAX-1)
				return 0;
			if (flag)
				ans = -ans;
			return (int)ans;
		}
	};
};