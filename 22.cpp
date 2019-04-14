
class Solution
{
public:
	vector<string> generateParenthesis(int n)
	{
		vector<string> ans;
		string solution;
		string temp;
		for (int i = 0; i < n; ++i)
		{
			temp = temp + "()";
		}
		if (n == 0)
		{
			ans.push_back("");
			return ans;
		}
		dfs(0, ans, temp);
		set<string> st;
		for (int i = 0; i < ans.size(); ++i)
		{
			st.insert(ans[i]);
		}
		vector<string> res;
		set<string>::iterator iterator1;
		for (iterator1=st.begin();iterator1!=st.end();iterator1++)
		{
			res.push_back(*iterator1);
		}
		return res;


	}

	void dfs(int pos, vector<string> &ans, string &temp)
	{
		if (pos == temp.size())
		{
			if (check(temp))
				ans.push_back(temp);
			return;
		}
		for (int i = pos; i < temp.size(); ++i)
		{
			swap(temp[pos], temp[i]);
			dfs(pos + 1, ans, temp);
			swap(temp[pos], temp[i]);
		}
	}

	bool check(string temp)
	{
		stack<char> stk;
		int len = (int) temp.length();

		for (int i = 0; i < len; ++i)
		{
			char ch = temp[i];
			switch (ch)
			{
				case '(':
					stk.push(ch);
					break;
				case ')':
					if (!stk.empty())
					{
						if (stk.top() == '(')
						{
							stk.pop();
						} else
							stk.push(ch);
					} else
						return false;
					break;
				default:
					return false;
			}
		}
		if (stk.empty())
			return true;
		return false;
	}
};


class Solution
{
public:
	vector<string> generateParenthesis(int n)
	{
		vector<string> res;
		string ans = "";
		dfs(n,n,ans,res);
		return res;
	}

	void dfs(int left,int right,string solution ,vector<string>& ans)
	{
		if (left > right)
			return;
		if (left == 0 && right == 0)
			ans.push_back(solution);
		else
		{
			if (left > 0)
				dfs(left - 1, right, solution+ '(',ans);
			if (right > 0)
				dfs(left,right-1,solution+')',ans);
		}
	}


};