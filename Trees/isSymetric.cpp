#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSymetricTest(TreeNode *p, TreeNode *q){
        if(!p and !q) return true;
        else if(!p or !q) return false;
        else if(p->val!=q->val) return false;
        return isSymetricTest(p->left,q->right) and isSymetricTest(p->right,q->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSymetricTest(root->left,root->right);
    }
};