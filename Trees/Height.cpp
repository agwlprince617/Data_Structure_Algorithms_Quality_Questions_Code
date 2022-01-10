#include<bits/stdc++.h>
using namespace std;

void height(Node* root){
    if(!root) return;
    return 1+max(height(root->left),height(root->right));
}