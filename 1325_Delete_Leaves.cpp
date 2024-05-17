/*
1325. Delete Leaves With a Given Value
Given a binary tree root and an integer target, delete all the leaf nodes with value target.
Note that once you delete a leaf node with value target, if its parent node becomes a leaf node and has the value target, it should also be deleted (you need to continue doing that until you cannot).
Example 1:
Input: root = [1,2,3,2,null,2,4], target = 2
Output: [1,null,3,null,4]
Explanation: Leaf nodes in green with value (target = 2) are removed (Picture in left). 
After removing, new nodes become leaf nodes with value (target = 2) (Picture in center).
*/
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
#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    static TreeNode* removeLeafNodes(TreeNode* root, int target, TreeNode* parent=NULL) {
        if (!root) return NULL;

        // Recursively remove leaf nodes from left and right subtrees
        root->left = removeLeafNodes(root->left, target, root);
        root->right = removeLeafNodes(root->right, target, root);

        // If current node is a leaf(not root) and its value==target, delete it
        if (!root->left && !root->right && root->val==target) {
            if (parent)  delete root; //the root cannot be deleted
            return NULL;
        }

        return root; 
    }
};
auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
