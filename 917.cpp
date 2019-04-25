

class Solution
{
public:
	string reverseOnlyLetters(string S)
	{
		int i = 0;
		int j = S.size() - 1;
		while (i <= j)
		{
			while (i<j&&!isalpha(S[i]))
				i++;
			while (i<j&&!isalpha(S[j]))
				j--;
			swap(S[i], S[j]);
			i++;
			j--;
		}
		return S;


	}

};