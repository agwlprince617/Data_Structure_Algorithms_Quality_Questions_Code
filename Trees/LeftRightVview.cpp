#include<bits/stdc++.h>
using namespace std;
 //Tc is O(n)
 //SC is O(height of tree)
void helper(Node* root,int level,vector<int>&v){
        if(!root) return;
        if(v.size()==level) v.push_back(root->data);
         helper(root->left,level+1,v);
        helper(root->right,level+1,v);
       
    }
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
    vector<int>v;
        helper(root,0,v);
        return v;
}