class Solution {
public:
	int numSpecialEquivGroups(vector<string>& A) {
		map<string,int > groups;
		for(string i : A)
		{
			string odd = "";
			string even= "";
			for (int j = 0; j < i.size(); ++j)
			{
				if (j % 2 == 0)
					odd+=i[j];
				else
					even+=i[j];
			}
			sort(odd.begin(),odd.end());
			sort(even.begin(),even.end());
			groups[odd+even]++;
		}
		return groups.size();
	}
};