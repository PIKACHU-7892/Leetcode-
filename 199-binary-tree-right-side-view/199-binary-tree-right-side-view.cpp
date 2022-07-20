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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> check;
        vector<int> result1;
        if(root==NULL)
        {
            return {};
        }
        check.push(root);
        while(check.size()>0)
        {
            int tracker  = check.size();
            for(int i = 0 ;i<tracker;i++)
            {
                TreeNode* result = check.front();
                check.pop();
                if(i==0)
                {
                    result1.push_back(result->val);
                }
                if(result->right!=NULL)
                {
                    check.push(result->right);
                }
                if(result->left!=NULL)
                {
                    check.push(result->left);
                }
            }
        }
        return result1;
    }
};