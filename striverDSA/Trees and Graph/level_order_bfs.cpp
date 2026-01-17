#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
using ll = long long;
#define nl "\n"
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Build tree like LeetCode (level order, -1 = null)
TreeNode* buildTree(vector<int>& v) {
    if (v.empty() || v[0] == -1) return nullptr;

    TreeNode* root = new TreeNode(v[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < v.size()) {
        TreeNode* curr = q.front();
        q.pop();

        if (i < v.size() && v[i] != -1) {
            curr->left = new TreeNode(v[i]);
            q.push(curr->left);
        }
        i++;

        if (i < v.size() && v[i] != -1) {
            curr->right = new TreeNode(v[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

class Solution {
public:


vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans;
    if (!root) return ans;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int sz = q.size();
        vector<int> level;

        for (int i = 0; i < sz; i++) {
            TreeNode* node = q.front(); q.pop();
            level.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        ans.push_back(level);
    }
    return ans;
}


    

    
};






























int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    TreeNode* root = buildTree(v);

    Solution sol;
    vector<int> res = sol.levelOrder(root);

    for (int x : res) cout << x << " ";
    return 0;
}
