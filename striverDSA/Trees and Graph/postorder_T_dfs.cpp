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
    void dfs(TreeNode* node, vector<int>& ans) {
        if (node==nullptr) return;
       
        dfs(node->left, ans);
        dfs(node->right, ans);
         ans.push_back(node->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (!root) return ans;

    stack<TreeNode*> st;
    TreeNode* lastVisited = nullptr;

    while (!st.empty() || root) {
        if (root) {
            st.push(root);
            root = root->left;
        } else {
            TreeNode* node = st.top();
            if (node->right && lastVisited != node->right) {
                root = node->right;
            } else {
                ans.push_back(node->val);
                lastVisited = node;
                st.pop();
            }
        }
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
    vector<int> res = sol.postorderTraversal(root);

    for (int x : res) cout << x << " ";
    return 0;
}
