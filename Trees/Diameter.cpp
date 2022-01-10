#include<bits/stdc++.h>
using namespace std;
//Most optimised TC is O(n) since the diameter is calcualted in the height recursion tree
//Sc is O(height of tree)
int diameter(Node* root) {
        // Your code here
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
    
    int height(Node* root,int &diameter){
        if(!root) return 0;
        int lh=height(root->left,diameter);
        int rh=height(root->right,diameter);
        diameter=max(lh+rh+1,diameter);
        return 1+max(lh,rh);
    }


//TC is O(n*n) since two recursion trees are computed
//Sc is O(height of tree)
int height(Node* root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
  
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(!root) return 0;
        int a=1+height(root->left)+height(root->right);
        int b=diameter(root->left);
        int c=diameter(root->right);
        int ans=max(a,max(b,c));
        return ans;
    }    