#include<bits/stdc++.h>
using namespace std;
  vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(!root) return ans;
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            Node *node=it.first;
            int line=it.second;
            q.pop();
            m[line]=node->data;
            if(node->left) q.push({node->left,line-1});
            if(node->right) q.push({node->right,line+1});
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }