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
    int kthSmallest(TreeNode* root, int k) {
        int n = 0 ;
        stack<TreeNode*> p;
        TreeNode* current = root;
        while(current || p.size())
        {
            while(current)
            {                  
                  p.push(current);
                  current = current->left;
                  
            }
            current = p.top();
            p.pop();
            n++;
            if(n==k)
            {
                return current->val;
            }
            current = current->right;
        }
        return 0;
    }
};