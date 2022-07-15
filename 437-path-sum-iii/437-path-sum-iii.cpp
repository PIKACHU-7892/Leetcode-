/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int pathSum2(TreeNode* root, long long  targetSum,long long prev)
    {
        if(root == NULL)
        {
            return 0;
        }
        long long  current = root->val + prev;
        return (current==targetSum) + pathSum2(root->left,targetSum,current) +pathSum2(root->right,targetSum,current);
    }
    int pathSum(TreeNode* root, long long  targetSum) {
        if(root == NULL)
        {
            return 0;
            
        }
        return pathSum(root->left,targetSum) + pathSum(root->right,targetSum) + pathSum2(root,targetSum,0);
        
    }
};