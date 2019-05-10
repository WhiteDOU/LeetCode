
class Solution
{
public:
	vector<int> ans;

	vector<int> preorder(Node *root)
	{
		if (root)
		{
			ans.push_back(root->val);
			int len = root->children.size();
			for (int i = 0; i < len; ++i)
			{
				preorder(root->children[i]);
			}
		}
		return ans;
	}
};
