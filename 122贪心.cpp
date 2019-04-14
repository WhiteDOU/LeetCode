class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0)
			return 0;
		if(prices.size() == 1)
			return 0;
		int curMin = prices[0];
		int sum=0;
		for (int i = 0; i < prices.size(); ++i)
		{
			if (prices[i]>curMin)
			{
				sum += prices[i] - curMin;
				curMin = prices[i];
			} else
			{
				curMin = min(curMin , prices[i]);
			}
		}
		return sum;
	}
};