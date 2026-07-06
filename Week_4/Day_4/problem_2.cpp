#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        depth(root, diameter);
        return diameter;
    }

private:
    int depth(TreeNode* node, int &diameter) {
        if (!node) return 0;
        int leftDepth = depth(node->left, diameter);
        int rightDepth = depth(node->right, diameter);
        diameter = max(diameter, leftDepth + rightDepth);
        return max(leftDepth, rightDepth) + 1;
    }
};

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    cout << solution.diameterOfBinaryTree(root) << endl;
    return 0;
}
