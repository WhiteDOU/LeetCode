class Solution
{
public:
	vector<int> sortArrayByParityII(vector<int> &A)
	{
		vector<int> even;
		vector<int> odd;
		vector<int> ans;
		for (int i = 0; i < A.size(); ++i)
		{
			if (A[i] % 2 == 0)
				even.push_back(A[i]);
			else
				odd.push_back(A[i]);
		}
		int flag = 0;
		int k = 0;
		int j =0;
		for (int i = 0; i < A.size(); ++i)
		{
			if (flag == 0)
			{
				ans.push_back(even[k++]);
				flag = 1;
			}
			else
			{
				ans.push_back(odd[j++]);
				flag = 0;
			}
		}
		return ans;
	}
};