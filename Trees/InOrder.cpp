#include<bits/stdc++.h>
using namespace std;
 //Recursive Solution O(n) Time Complexity and O(n) Space Complexity
 void inOrderfun(Node* root,vector<int> &v){
        if(!root) return;
        inOrderfun(root->left,v);
        v.push_back(root->data);
        inOrderfun(root->right,v);
    }
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> v;
        inOrderfun(root,v);
        
        return v;
        
    }

//Iterative Solution O(n) Time Complexity and O(n) Space Complexity

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        while(root||!s.empty()){
            if(root!=NULL){
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                ans.push_back(root->val);
                root=root->right;
            }
          }
        return ans;
    }
};