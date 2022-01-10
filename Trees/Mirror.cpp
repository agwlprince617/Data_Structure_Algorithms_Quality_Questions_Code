 #include<bits/stdc++.h>
using namespace std;
 //Tc is O(n)
 //SC is O(height of tree)
 void mirror(Node* root) {
        // code here
        if(!root) return;
        mirror(root->left);
        mirror(root->right);
        swap(root->left,root->right);
    }