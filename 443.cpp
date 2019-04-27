
class Solution
{
public:
	int compress(vector<char> &chars)
	{
		int w = 0;
		for (int i = 0, j = 0; i < chars.size(); j = i)
		{
			while (++i < chars.size() && chars[i] == chars[i - 1]);
			int k = i - j;
			chars[w++] = chars[j];
			if (k>1)
			{
				int start= w;
				while (k)
				{
					chars[w++] = k%10+'0';
					k/=10;
				}
				for (int end = w-1;start <end ; )
				{
					swap(chars[start++],chars[end--]);
				}
			}
		}
		return w;
	}
};


class Solution
{
public:
	int compress(vector<char> &chars)
	{
		if (chars.size() <= 1)
		{
			return chars.size();
		}
		char pre = chars[0];
		int count = 1;
		int j = 0;
		for (int i = 1; i < chars.size(); i++)
		{
			if (chars[i] == pre)
			{
				count++;
			} else
			{
				if (count > 1)
				{
					chars[j++] = pre;
					auto tmp = to_string(count);
					for (auto x: tmp)
					{
						chars[j++] = x;
					}
				} else
				{
					chars[j++] = pre;
				}
				pre = chars[i];
				count = 1;
			}
		}
		if (count > 1)
		{
			chars[j++] = pre;
			auto tmp = to_string(count);
			for (auto x: tmp)
			{
				chars[j++] = x;
			}
		} else
		{
			chars[j++] = pre;
		}
		return j;
	}
};