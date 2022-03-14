#include<bits/stdc++.h>
using namespace std; 

bool checkforCycle(int a,vector<int> adj[],int V,vector<int> &vis){
        queue<pair<int,int>> q;
        vis[a]=1;
        q.push({a,-1});
        
        while(!q.empty()){
            int node=q.front().first;
            int par=q.front().second;
            q.pop();
            
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[node]=1;
                    q.push({it,node});
                }
                else if(it!=par) return true;
            }
        }
        return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkforCycle(i,adj,V,vis)) return true;
            }
        }
        return false;
    }


    
//DFS Approach
 bool checkforCycle(int node,vector<int> adj[],int par,vector<int> &vis){
      vis[node]=1;
      for(auto it:adj[node]){
          if(!vis[it]){
              if(checkforCycle(it,adj,node,vis)) return true;
          }
          else if(it!=par) return true;
      }
      return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkforCycle(i,adj,-1,vis)) return true;
            }
        }
        return false;
    }    