
class Solution
{
public:
	bool isValid(string s)
	{
		stack<char> stk;
		for (int i = 0; i < s.length(); ++i)
		{
			int temp = s[i];
			switch (s[i])
			{
				case '(':
					stk.push(s[i]);
					break;
				case ')':
					if (!stk.empty())
					{
						if (stk.top() == '(')
						{
							stk.pop();
						} else
							stk.push(s[i]);
					} else
						stk.push(s[i]);
					break;
				case '[':
					stk.push(s[i]);
					break;
				case ']':
					if (!stk.empty())
					{
						if (stk.top() == '[')
							stk.pop();
						else
							stk.push(s[i]);
					} else
						stk.push(s[i]);
					break;
				case '{':
					stk.push(s[i]);
					break;
				case '}':
					if (!stk.empty())
					{
						if (stk.top() == '{')
							stk.pop();
						else
							stk.push(s[i]);
					} else
						stk.push(s[i]);
					break;

			}
		}

		return stk.empty();
	}
};
