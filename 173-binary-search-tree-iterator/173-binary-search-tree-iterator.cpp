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
class BSTIterator {
public:
     stack<TreeNode*> s;
    BSTIterator(TreeNode* root) {
       
        
        while(root)
        {
            s.push(root);
            root=root->left;
            
        }
    }
    
    int next() {
        TreeNode* result = s.top();
        s.pop();
        TreeNode* current = result->right;
        while(current)
        {
            s.push(current);
            current= current->left;
        }
        return result->val;
        
    }
    
    bool hasNext() {
        return s.size()!=0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */