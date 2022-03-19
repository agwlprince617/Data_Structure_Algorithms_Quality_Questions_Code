#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,source;
    cin>>n>>m;
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<m;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }

    cin>>source;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> distTo(n+1,INT_MAX);


    distTo[source]=0;
    pq.push(make_pair(0,source));

    while(!pq.empty()){
        int dist=pq.top().first;
        int node=pq.top().second;
        pq.pop();

        for(auto it:adj[node]){
            int next=it.first;
            int nextDist=it.second;
            if(distTo[next]>dist+nextDist){
                distTo[next]=dist+nextDist;
                pq.push(make_pair(distTo[next],next));
            }
        }
    }
    cout<<"The distance from source "<<source<<"are \n";
    for(int i=1;i<=n;i++){
        cout<<distTo[i]<<" ";
    }
}