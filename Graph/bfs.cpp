#include<bits/stdc++.h>
using namespace std;

 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<int> vis(V,0);
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            vis[node]=1;
            ans.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        
        return ans;
    }

//TC is O(V+E) SC is O(V)