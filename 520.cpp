class Solution
{
public:
	bool detectCapitalUse(string word)
	{
		bool small = true;
		bool second_small = true;
		bool lianxi = false;
		if (word.size() <= 1)
			return true;
		if (islower(word[0]))
		{
			small = true;
		} else
			small = false;
		if (small == true)
		{
			for (int i = 1; i < word.size(); ++i)
			{
				if (!islower(word[i]))
					return false;
			}
		} else if (small == false)
		{
			if (islower(word[1]))
			{
				for (int i = 2; i < word.size(); ++i)
				{
					if (!islower(word[i]))
						return false;
				}
			} else
			{
				for (int i = 2; i <word.size() ; ++i)
				{
					if (islower(word[i]))
						return false;
				}
			}
		}
		return true;
	}
};
