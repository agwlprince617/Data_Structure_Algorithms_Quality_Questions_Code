#include<bits/stdc++.h>
using namespace std;


//Using adjacency matrix
//Use adj matrix only for smaller values of n i.e less than pow(10,5)

int main(){
    int n,m;
    cin>>n>>m;
    int adj[n+1][n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    return 0;
}


//Uisng adjacency list
//Undirected Graph
//TC is O(N+2E)
int main(){
    int n,m; cin>>n>>m;
    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); //Directed Graph omit this line
    }
}

//Graph With weights
//TC is O(N+2E)+2E still better than adj matrix of O(N*N)
int main(){
    int n,m; cin>>n>>m;
    vector<pair<int,int>> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v,wt; cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt}); //Directed Graph omit this line
    }
}


