
class Solution
{
public:
	int getDepth(TreeNode *root)
	{
		if (root == NULL)
			return 0;
		else
		{
			int left_depth = getDepth(root->left);
			int right_depth = getDepth(root->right);
			return (left_depth > right_depth ? left_depth : right_depth) + 1;
		}

	}

	bool isBalanced(TreeNode *root)
	{
		if (root == NULL)
			return true;
		else
		{
			int ldepth = getDepth(root->left);
			int rdepth = getDepth(root->right);
			if (rdepth - ldepth < 2 and rdepth - ldepth > -2)
			{
				return isBalanced(root->right) && isBalanced(root->left);
			} else
			{
				return false;
			}
		}
	}


};