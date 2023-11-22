#include <bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution{
    private:
    void helper(Node *r1, Node *r2, bool &check) {
        if (r1 == NULL && r2 == NULL)
            return;
        else if (r1 == NULL || r2 == NULL || (r1->data != r2->data)) {
            check = false;
            return;
        }
        helper(r1->left, r2->right, check);
        helper(r1->right, r2->left, check);
        return;
    }
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    if (root == NULL)   return true;
	    bool check = true;
	    helper(root->left, root->right, check);
	    return check;
    }
};