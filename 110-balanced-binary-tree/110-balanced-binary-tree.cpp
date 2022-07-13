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
    pair<bool,int> finalChecker(TreeNode* root)
    {
        if(root==NULL)
        {
            return {true,0};
        }
        pair<bool,int> a = finalChecker(root->left);
        pair<bool,int> b = finalChecker(root->right);
        bool balanced = a.first && b.first && (abs(a.second - b.second)<=1);
        return {balanced,max(a.second,b.second)+1};
        
    }
    bool isBalanced(TreeNode* root) {
        pair<bool,int> c = finalChecker(root);
        return c.first;

    }
};