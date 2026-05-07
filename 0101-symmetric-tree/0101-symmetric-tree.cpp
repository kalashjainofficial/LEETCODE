class Solution {
public:
    bool forleft(TreeNode* leftt, TreeNode* rightt) {
        queue<TreeNode*> q1, q2;
        q1.push(leftt);
        q2.push(rightt);

        while (!q1.empty() && !q2.empty()) {
            TreeNode* n1 = q1.front(); q1.pop();
            TreeNode* n2 = q2.front(); q2.pop();

            if (!n1 && !n2) continue;
            if (!n1 || !n2) return false;
            if (n1->val != n2->val) return false;

            // Push children in mirrored order
            q1.push(n1->left);
            q1.push(n1->right);

            q2.push(n2->right);
            q2.push(n2->left);
        }

        return q1.empty() && q2.empty();
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return forleft(root->left, root->right);
    }
};
