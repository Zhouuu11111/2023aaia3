//Week14-4b.cpp 學習計畫 Binary Tree
//LeetCode 104.
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr ) return 0; // 結束條件 空的 就沒有任何深
        int ans1 = maxDepth(root->left);
        int ans2 = maxDepth(root->right);
        return 1 + max( ans1, ans2 );
    }
};
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
