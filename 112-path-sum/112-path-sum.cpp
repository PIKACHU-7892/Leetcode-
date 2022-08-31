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
    void checksum(TreeNode* root , int targetSum, int sum, int& count )
    {
        if(root == NULL )
        {
            return ;
        }
        sum = sum + root->val;
        if(sum == targetSum && root->left == NULL && root->right ==NULL)
        {
            count++;
        }
        checksum(root->left,targetSum,sum,count);
        checksum(root->right,targetSum,sum,count);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root ==NULL)
        {
            return false;
            
        }
        int count = 0;
        int sum = 0;
        checksum(root,targetSum,sum,count);
        if(count==0)
        {
            return false;
        }
        return true;
    }
};