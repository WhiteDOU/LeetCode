class Solution
{
public:
	vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
	{
		set<int> set1;
		set<int> set2;

		for (int i : nums1)
			set1.insert(i);

		for (int i:nums2)
			set2.insert(i);
	   vector<int> ans;
		for (auto  iterator1 = set1.begin();iterator1!=set1.end();iterator1++)
		{
			if (set2.find(*iterator1)!=set2.end())
				ans.push_back(*iterator1);
		}
		return ans;

	}
};