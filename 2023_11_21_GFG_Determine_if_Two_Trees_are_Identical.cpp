#include <bits/stdc++.h>
using namespace std;



struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};



   
class Solution {
    private:
    void helper(Node *r1, Node *r2, bool &check) {
        if (r1 == NULL && r2 == NULL)
            return;
        else if (r1 == NULL || r2 == NULL || (r1->data != r2->data)) {
            check = false;
            return;
        }
        helper(r1->left, r2->left, check);
        helper(r1->right, r2->right, check);
        return;
    }
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        bool check = true;
        helper(r1, r2, check);
        return check;
    }
};