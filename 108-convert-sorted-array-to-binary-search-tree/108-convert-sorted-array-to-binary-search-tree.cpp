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
    TreeNode* help(vector<int> nums, int left , int right )
    {
        if(left>right)
        {
            return NULL;
        }
        int mid = (left + right)/2;
        TreeNode* a= new TreeNode;
        a->val = nums[(left +right)/2];
        a->left = help(nums,left,mid-1);
        a->right = help(nums,mid+1,right);
        return a;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums,0,nums.size()-1);
    }
};