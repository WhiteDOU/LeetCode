#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	bool lemonadeChange(vector<int> &bills)
	{
		int five = 0;
		int ten = 0;
		int twevth = 0;
		int flag = true;
		if (bills[0] == 10 || bills[0] == 20)
			return false;
		for (int i = 0; i < bills.size(); ++i)
		{
			switch (bills[i])
			{
				case 5:
					five++;
					break;
				case 10:
					ten++;
					if (five == 0)
					{
						flag = false;
					} else
					{
						five--;
					}
					break;
				case 20:
					twevth++;
					if (ten >= 1 && five >= 1)
					{
						ten--;
						five--;
					} else if (five >= 3)
					{
						five -= 3;
					} else
						flag = false;
					break;

			}
		}
		return flag;
	}
};

int main()
{

}