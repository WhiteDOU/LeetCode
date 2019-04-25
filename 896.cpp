class Solution
{
public:
	vector<TreeNode *> allPossibleFBT(int N)
	{
		vector<TreeNode *> ans;
		if (N % 2 == 0)
			return ans;
		if (N == 1)
		{
			TreeNode *root = new TreeNode(0);
			ans.push_back(root);
			return ans;
		}
		N = N - 1;
		for (int i = 1; i <=N ; i+=2)
		{
			vector<TreeNode*> L = allPossibleFBT(i);
			vector<TreeNode*> R = allPossibleFBT(N-i);
			for(auto i : L)
			{
				for (auto j : R)
				{
					TreeNode* root = new TreeNode(0);
					root -> left = i;
					root -> right = j;
					ans.push_back(root);
				}
			}
		}
		return ans;

	}
};