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
    TreeNode* current = new TreeNode();
    bool dfs(TreeNode* root , TreeNode* p ,TreeNode* q )
    {
        if(root==NULL)
        {
             return false ;
        }
        int left = dfs(root->left,p,q);
        int right = dfs(root->right,p,q);
        int mid = (root==p || root==q)?1:0;
        
        if(mid + left + right>=2)
        {
           
current= root;
             
            
        }
        return (left + mid + right>0);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* present = NULL ;
        dfs(root,p,q);
        return current ;
      
    }
};