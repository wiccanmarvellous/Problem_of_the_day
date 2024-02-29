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

//BFS
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if (root == NULL)   return 0;
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            ans = q.front()->val;
            for (int i = 0; i < n; i++) {
                TreeNode *node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return ans;
    }
};

//DFS
class Solution {
private:
    TreeNode* helper(TreeNode* root, int depth, int currDepth) {
        if (root == NULL)
            return NULL;
        currDepth += 1;
        cout << currDepth << ' ';
        if (currDepth == depth)
            return root;
        TreeNode *ans = NULL;
        ans = helper(root->left, depth, currDepth);
        if (ans) return ans;
        ans = helper(root->right, depth, currDepth);
        if (ans) return ans;
        return NULL;
    }
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        int l = maxDepth(root->left);
        int r = maxDepth(root->right);
        return max(l, r) + 1;
    }
public:
    int findBottomLeftValue(TreeNode* root) {
        if (root == NULL)   return 0;
        int depth = maxDepth(root);
        TreeNode* ans = helper(root, depth, 0);
        if (ans)    return ans->val;
        return 0;
    }
};