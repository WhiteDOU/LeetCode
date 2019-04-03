class Solution 
{
public:
	TreeNode* invertTree(TreeNode* root) 
	{
		dfs_invert(root);
		return root;
	}
	void dfs_invert(TreeNode* root)
	{
		if(root == NULL)
		{
			return;
		}
		
		invertTree(root -> left);
		invertTree(root -> right);
		// swap after the left subtree and right subtree has been done
		swap(root -> left, root -> right);
	}
};