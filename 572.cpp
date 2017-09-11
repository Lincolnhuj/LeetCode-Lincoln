/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	bool isSameTree(TreeNode* s, TreeNode* t){
		if(!s and !t) return true;
		else if (!s or !t) return false;
		else {
			if(s->val != t->val) return false;
			else{
				return isSameTree(s->left, t->left) and isSameTree(s->right, t->right);
			}
		}
	}
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s and t) return false;
        return isSubtree(s->left,t) or isSubtree(s->right,t) or isSameTree(s,t);
    }
};
