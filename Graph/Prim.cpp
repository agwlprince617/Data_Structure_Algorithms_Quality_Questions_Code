#include<bits/stdc++.h>
using namespace std;


//TC is O(N*N)
int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];

    int a,b,wt;
    for(int i=0;i<m;i++){
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }
    int parent[n],key[n],mst[n];


    //Initialising
    for(int i=0;i<n;i++) key[i]=INT_MAX,mst[i]=false,parent[i]=-1;

    key[0]=0;


    for(int i=0;i<n-1;i++){
        int mini=INT_MAX,u;

        for(int v=0;v<n;v++){
            //Find the minimum key value in key array
            if(mst[v]==false and key[v]<mini){
                mini=key[v];
                u=v;
            }
            //The minimum index u is marked true in mst
            mst[u]=true;
            //Iterate to all its adjacent 
            for(auto it:adj[u]){
                int v=it.first;
                int wt=it.second;
                if(mst[v]==false and wt<key[v]){
                    parent[v]=u, key[v]=wt;
                }
            }
        }

        for(int i=1;i<n;i++){
            cout<<parent[i]<<" "<<i<<"\n";
        }
    }
}



//Optimised Solution O(N*logN)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];

    int a,b,wt;
    for(int i=0;i<m;i++){
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }
    int parent[n],key[n],mst[n];


    //Initialising

    for(int i=0;i<n;i++) key[i]=INT_MAX,mst[i]=false,parent[i]=-1;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    key[0]=0;
    pq.push({0,0});

    for(int i=0;i<n-1;i++){
        int u=pq.top().second;
        pq.pop();

     

            //The minimum index u is marked true in mst 
            mst[u]=true;
            //Iterate to all its adjacent 
            for(auto it:adj[u]){
                int v=it.first;
                int wt=it.second;
                if(mst[v]==false and wt<key[v]){
                    parent[v]=u, key[v]=wt;
                    pq.push({key[v],v});
                }
            }
        }

        for(int i=1;i<n;i++){
            cout<<parent[i]<<" "<<i<<"\n";
        }
}
