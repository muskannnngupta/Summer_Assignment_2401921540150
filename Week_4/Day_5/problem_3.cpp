#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
public:
    string serialize(TreeNode* root) {
        string res;
        serializeNode(root, res);
        return res;
    }

    TreeNode* deserialize(const string& data) {
        int pos = 0;
        return deserializeNode(data, pos);
    }

private:
    void serializeNode(TreeNode* node, string &res) {
        if (!node) {
            res += "# ";
            return;
        }
        res += to_string(node->val) + " ";
        serializeNode(node->left, res);
        serializeNode(node->right, res);
    }

    TreeNode* deserializeNode(const string& data, int &pos) {
        if (pos >= data.size()) return nullptr;
        if (data[pos] == '#') {
            pos += 2;
            return nullptr;
        }
        int sign = 1;
        if (data[pos] == '-') {
            sign = -1;
            ++pos;
        }
        int value = 0;
        while (pos < data.size() && isdigit(data[pos])) {
            value = value * 10 + (data[pos] - '0');
            ++pos;
        }
        value *= sign;
        pos++;
        TreeNode* node = new TreeNode(value);
        node->left = deserializeNode(data, pos);
        node->right = deserializeNode(data, pos);
        return node;
    }
};

void printPreorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << ' ';
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    Codec codec;
    string data = codec.serialize(root);
    TreeNode* deserialized = codec.deserialize(data);
    printPreorder(deserialized);
    cout << endl;
    return 0;
}
