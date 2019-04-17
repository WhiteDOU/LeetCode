
class Solution
{
public:
	static bool cmp(int &a, int &b)
	{
		string t1 = to_string(a);
		string t2 = to_string(b);
		return t1 + t2 > t2 + t1;
	}

	string largestNumber(vector<int> &nums)
	{
		if (nums.size() == 0)
			return "";
		int flag = 0;
		for(auto i : nums)
		{
			if (i != 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			return "0";
			
		sort(nums.begin(), nums.end(), cmp);
		string ans;
		for (auto i : nums)
		{
			ans = ans + to_string(i);
		}
		for (auto i : ans)
		{
			if (i == '0')
				ans.erase(ans.begin());
			else
				break;
		}
		return ans;

	}
};
