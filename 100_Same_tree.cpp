/*100. Same Tree

Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
Example 1:
Input: p = [1,2,3], q = [1,2,3]
Output: true
  
Example 2:
Input: p = [1,2], q = [1,null,2]
Output: false
  */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // base case 
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p == NULL || q == NULL) {
            return false;
        }
        // Check if values are equal and recursively check left and right subtrees
        if (p->val == q->val) {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    
        return false;
    }
};
