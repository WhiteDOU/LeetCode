class Solution
{
public:
	string reverseWords(string s)
	{
		int len = s.length();
		int i = 0;
		while (i < len && s[i] == ' ')
			i++;
		int j = i;
		while (j < len)
		{
			while (j < len && s[j] != ' ')
				j++;
			int low = i;
			int high = j - 1;
			while (low <= high)
			{
				swap(s[low], s[high]);
				low++;
				high--;
			}
			while (j < len && s[j] == ' ')
				j++;
			i = j;
		}
		return s;
	}
};