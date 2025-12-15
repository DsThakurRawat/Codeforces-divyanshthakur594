#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        left = right = nullptr;
    }
};

int main() {
    Node* root = new Node(1);        // root node
    root->left = new Node(2);        // left child
    root->right = new Node(3);       // right child
    root->left->right = new Node(5); // right child of left node

    cout << root->val << "\n";              // 1
    cout << root->left->val << "\n";        // 2
    cout << root->right->val << "\n";       // 3
    cout << root->left->right->val << "\n"; // 5
}
