#include<bits/stdc++.h>
using namespace std;

void findTopoSort(int node,vector<int>adj[],vector<int>&vis,stack<int>&st){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it]){
	            vis[it]=1;
	            findTopoSort(it,adj,vis,st);
	        }
	    }
        //if the dfs call is finished then we push it into the stack
	    st.push(node);
}
	
	//Function to return list containing vertices in Topological order. 
vector<int> topoSort(int V, vector<int> adj[]) {
    // code here
	    vector<int> vis(V+1,0);
	    stack<int>st;
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            findTopoSort(i,adj,vis,st);
	        }
	    }
	    
	    vector<int>topo;
	    while(!st.empty()){
	        topo.push_back(st.top());
	        st.pop();
	    }
	    return topo;
}