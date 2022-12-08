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
    using VI = vector<int>;
    struct {
        VI A, B;
    } leaves;
    bool leafSimilar(TreeNode* A, TreeNode* B) {
        go(A, leaves.A);
        go(B, leaves.B);
        return leaves.A == leaves.B;
    }

    void go(TreeNode* node, VI& leaves) {
        if (!node)
            return;
        if (!node->left && !node->right)
            leaves.push_back(node->val);
        go(node->left, leaves);
        go(node->right, leaves);
    }
};
