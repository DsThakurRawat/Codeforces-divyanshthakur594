#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Build tree (level order, -1 = null)
TreeNode* buildTree(vector<int>& v) {
    if (v.empty() || v[0] == -1) return nullptr;

    TreeNode* root = new TreeNode(v[0]);
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (!q.empty() && i < v.size()){
        TreeNode* curr = q.front();
        q.pop();

        if (i < v.size() && v[i] != -1){
            curr->left = new TreeNode(v[i]);
            q.push(curr->left);
        }
        i++;

        if (i < v.size() && v[i] != -1){
            curr->right = new TreeNode(v[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}

class Solution {
public:
   vector<int> bfs(TreeNode* root){
    vector<int> ans;
    if (!root) return ans;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* cur = q.front();
        q.pop();

        ans.push_back(cur->val);

        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
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
    vector<int> res = sol.bfs(root);

    // correct printing
  
        for (int x : res) cout << x << " ";
        cout << "\n";
   
    return 0;
}
