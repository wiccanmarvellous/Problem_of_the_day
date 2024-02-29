#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        if (root == NULL)   return true;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while (!q.empty()) {
            int n = q.size();
            TreeNode *prev = NULL;
            while (n--) {
                TreeNode* curr = q.front();
                q.pop();
                if (level % 2 == 0) {
                    if (curr->val % 2 == 0 || prev && curr->val <= prev->val) 
                        return false;
                }
                else {
                    if (curr->val % 2 != 0 || prev && curr->val >= prev->val) 
                        return false;
                }
                prev = curr;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            level++;
        }
        return true;
    }
};