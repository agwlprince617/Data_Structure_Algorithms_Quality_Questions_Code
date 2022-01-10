#include<bits/stdc++.h>
using namespace std;

 
 vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> ans;
      if(!node) return ans;
      queue<Node*>q;
      q.push(node);
      while(!q.empty()){
          Node* temp=q.front();
          ans.push_back(temp->data);
          q.pop();
          if(temp->left) q.push(temp->left);
          if(temp->right) q.push(temp->right);
      }
      return ans;
    }

//Time Complexity is O(n) as we need to traverse all the nodes;
//Space Complexity is O(n) for storing the ans