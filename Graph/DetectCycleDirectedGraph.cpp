#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int node,vector<int> adj[],vector<int> &vis){
        vis[node]=1;
        
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                if(checkCycle(it,adj,vis)) return true;
            }
            else if(vis[it]==1) return true;
        }
        //After completing the for loop if it cannot find that means it ahs completed
        //the dfs loop and then we mark it as 2
        vis[node]=2;
        return false;
}
    // Function to detect cycle in a directed graph.
bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> vis(V+1,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(checkCycle(i,adj,vis)) return true;
                
            }
        }
        return false;
}