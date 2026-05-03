class Solution {
public:
    int diameter = 0;

    int height(TreeNode* root) {
        if (!root) return 0;

        int left = height(root->left);
        int right = height(root->right);

        // update diameter (edges: left + right)
        diameter = max(diameter, left + right);

        // return height (nodes: 1 + max(left, right))
        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
