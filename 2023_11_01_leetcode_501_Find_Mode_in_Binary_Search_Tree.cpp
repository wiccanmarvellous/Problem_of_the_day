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
    void helper(TreeNode* root, unordered_map<int, int> &freq) {
        if (root == NULL)
            return;
        freq[root->val]++;
        if (root->left) helper(root->left, freq);
        if (root->right) helper(root->right, freq);
    }
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        unordered_map<int, int> freq;
        helper(root, freq);
        int m = 0;
        for (auto i : freq)
            m = max(m, i.second);
        for (auto i : freq)
            if (i.second == m)
                ans.push_back(i.first);
        return ans;
    }
};