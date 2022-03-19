#include<bits/stdc++.h>
using namespace std;


//Time Complexity is O(V*E) not as good as dijkstra 
struct node{
    int u,v,wt;
    node(int first,int second,int weight){
        u=first;
        v=second;
        wt=weight;
    }
};

int main(){
    int n,m;
    cin>>n>>m;
    vector<node> edges;
    int u,v,wt;
    for(int i=0;i<m;i++){
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }

    int src;
    cin>>src;

    int inf=10000000;
    vector<int> dist(n,inf);
    dist[src]=0;
    //Relaxing n-1 edges
    for(int i=0;i<n;i++){
        for(auto it:edges){
            if(dist[it.u]+it.wt<dist[it.v]){
                dist[it.v]=dist[it.u]+it.wt;
            }
        }
    }
    //To check a negative Cycle before printing the result
    int flag=0;
     for(auto it:edges){
            if(dist[it.u]+it.wt<dist[it.v]){
                cout<<"-ve Cycle";
                flag=1;
                break;
            }
     }
     if(!flag){
         for(int i=0;i<n;i++){
             cout<<i<<" "<<dist[i]<<"\n";
         }
     }
}