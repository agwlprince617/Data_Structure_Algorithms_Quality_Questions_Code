#include<bits/stdc++.h>
using namespace std;
 
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