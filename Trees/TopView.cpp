#include<bits/stdc++.h>
using namespace std;
  vector<int> topView(Node *root)
    {
        //Your code here
         vector<int> ans;
        if(!root) return ans;
        map<int,int> mpp;
        queue<pair<int,Node*>> q;
        q.push({0,root});
        while(!q.empty()){
            auto it=q.front();
            int line=it.first;
            Node *node=it.second;
            q.pop();
            if(mpp.find(line)==mpp.end()) mpp[line]=node->data;
            if(node->left) q.push({line-1,node->left});
            if(node->right) q.push({line+1,node->right});
        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }