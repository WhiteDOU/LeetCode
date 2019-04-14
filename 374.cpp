int guess(int num);
class Solution {
public:
	int guessNumber(int n) {
		int left = 1;
		int right = n;
		int ans =-1;
		int mid = left + (right-left)/2;
		while (left <= right)
		{
			mid = left + (right-left)/2;
			int num = guess(mid);
			if (num == 0)
			{
				ans = mid ;
				break;
			}
			else if (num == - 1)
				right = mid - 1;
			else if (num == 1)
				left = mid + 1;
			
		}
		return ans;
	}
};