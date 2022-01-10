#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node *right;
    Node(int x){
        data=x;
        left=right=NULL;
    }
};

Node* buildTree(){
    Node* root;
    int x;
    cin>>x;
    if(x==-1) return NULL;

    root=new Node(x);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

void printTree(Node *root){
    if(!root) return;
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}

int main(){
    Node *root=buildTree();
    printTree(root);
    return 0;
}
