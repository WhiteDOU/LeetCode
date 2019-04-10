class Solution {
public:
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> v;
		if (root == NULL)
			return v;
		dfs(v,root,to_string(root->val));
	}
	void dfs(vector<string>& v,TreeNode* root,string s)
	{
		if (root->left == NULL && root ->right == NULL)
		{
			v.push_back(s);
			return;;
		}
		if (root->left!=NULL)
			dfs(v,root->left,s+"->"+to_string(root->left->val));
		if (root->right!= NULL)
			dfs(v,root->right,s+"->"+to_string(root->right->val));
	}


};