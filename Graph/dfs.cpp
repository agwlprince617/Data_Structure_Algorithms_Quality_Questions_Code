#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[],int node,vector<int> &vis,vector<int> &ans){
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(adj,it,vis,ans);
            }
        }
}
    
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(adj,i,vis,ans);
            }
        }
        return ans;
}

//TC is O(V+E) SC is O(V)    