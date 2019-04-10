class Solution
{
public:
	string string1;
	string string2;

	bool leafSimilar(TreeNode *root1, TreeNode *root2)
	{
		DFS(root1,string1);
		DFS(root2,string2);
		return string1 == string2;

	}

	void DFS(TreeNode *root, string& string3)
	{
		if (!root)
			return;
		if (!root->left && !root->right)
		{
			string3 = string3 + to_string(root->val);
		}
		DFS(root->left,string3);
		DFS(root->right,string3);
	}

};