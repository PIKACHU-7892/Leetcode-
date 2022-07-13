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
    int finalChecker(TreeNode* root,int & diameter)
    {
        if(root == NULL)
        {
            return -1;
        }
        int left = finalChecker(root->left,diameter);
        int right = finalChecker(root->right,diameter);
        diameter = max(diameter,2+left+ right);
        return 1 + max(left,right);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = -1;
        finalChecker(root,diameter);
        return diameter;
    }
};