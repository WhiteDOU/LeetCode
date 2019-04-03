class Solution {
public:
	int longestUnivaluePath(TreeNode* root) {
		if (!root)
			return 0;
		int cur=max(longestUnivaluePath(root->left),longestUnivaluePath(root-><right));
		return max(cur,cumSum(root->left)+cumSum(root->right));
	}
	int cumSum(TreeNode* node, int parent) {
		if(!node||node->val!=parent)
			return 0;
		return 1+max(cumSum(node->left,node->val),cumSum(node->right,node->val));
	}
};