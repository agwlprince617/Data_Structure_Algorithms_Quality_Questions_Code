#include<bits/stdc++.h>
using namespace std;

vector<int> reverseLevelOrder(Node *node)
{
    // code here
    vector<int> res;
    if(node==NULL) return res;
    queue<Node*>q;
    q.push(node);
    while(!q.empty()){
        Node* temp=q.front();
        res.push_back(temp->data);
        q.pop();
      
          if(temp->right!=NULL) q.push(temp->right);
          if(temp->left!=NULL) q.push(temp->left);
    }
    reverse(res.begin(),res.end());
    return res;
}