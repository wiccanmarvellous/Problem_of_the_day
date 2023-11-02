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
private:
    pair<int, int> helper(TreeNode* root, int &count) {
        if (root == NULL)
            return {0, 0};
        if (root->left == NULL && root->right == NULL) {
            count++;
            return {root->val, 1};
        }
        if (root->left == NULL) {
            pair<int, int> r = helper(root->right, count);
            if ((r.first + root->val) / (r.second + 1) == root->val)   count++;
            return {r.first + root->val , r.second + 1};
        }
        if (root->right == NULL) {
            pair<int, int> l = helper(root->left, count);
            if ((l.first + root->val) / (l.second + 1)  == root->val)   count++;
            return {l.first + root->val , l.second + 1};
        }
        else {
            pair<int, int> l = helper(root->left, count);
            pair<int, int> r = helper(root->right, count);
            if ((l.first + r.first + root->val) / 
            (l.second + r.second + 1) == root->val) count++;
            return {(l.first + r.first + root->val), (l.second + r.second + 1)};
        }
    }
public:
    int averageOfSubtree(TreeNode* root) {
        if (root == NULL)
            return 0;
        int count = 0;
        helper(root, count);
        return count;
    }
};