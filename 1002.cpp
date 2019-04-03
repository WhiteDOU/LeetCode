
class Solution
{
public:
	vector<string> commonChars(vector<string> &A)
	{
		int mem[100][27];
		vector<string> ans;
		for (int i = 0; i < 100; ++i)
		{
			for (int j = 0; j < 27; ++j)
			{
				mem[i][j] = 0;
			}
		}
		for (int i = 0; i < A.size(); ++i)
		{
			for (int j = 0; j < A[i].length(); ++j)
			{
				char temp = A[i][j];
				mem[i][temp - 'a' + 1]++;
			}
		}
		for (int j = 1; j <= 26; ++j)
		{
			int Min = 1000;
			for (int i = 0; i < A.size(); ++i)
			{
				Min = min(Min, mem[i][j]);
			}
			char temp = 'a' - 1 + j;
			string input;
			input = input + temp;

			for (int i = 0; i < Min; ++i)
			{
				ans.push_back(input);
			}
		}
		return ans;
	}
};

