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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> index;
        for (int i = 0; i < inorder.size(); ++i) {
            index[inorder[i]] = i;
        }
        int preIndex = 0;
        return build(preorder, 0, inorder.size() - 1, preIndex, index);
    }

private:
    TreeNode* build(const vector<int>& preorder, int left, int right, int &preIndex,
                    const unordered_map<int, int> &index) {
        if (left > right) return nullptr;
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = index.at(rootVal);
        root->left = build(preorder, left, mid - 1, preIndex, index);
        root->right = build(preorder, mid + 1, right, preIndex, index);
        return root;
    }
};

void printInorder(TreeNode* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->val << ' ';
    printInorder(root->right);
}

int main() {
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    Solution solution;
    TreeNode* root = solution.buildTree(preorder, inorder);
    printInorder(root);
    cout << endl;
    return 0;
}
