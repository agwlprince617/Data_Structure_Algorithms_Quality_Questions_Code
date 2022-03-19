#include<bits/stdc++.h>
using namespace std; 
const int N=100000001;
vector<int> adj[N];
vector<int> label(N),size(N,1),edges(N,0);

void rename(int node,int lab){
    label[node]=lab;
    for(auto it:adj[node]){
        if( label[it]!=lab){
            rename(it,lab);
        }
    }
}

void merge(int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
    edges[label[a]]++;
    if(label[a]==label[b]) return;
    //Alag Alag component ka size kya hai
    int s1=size[label[a]];
    int s2=size[label[b]];
    //chota size ko rename karenge
    if(s2<s1){
        swap(s1,s2);
        swap(a,b);
    }
    int la=label[a];
    rename(a,label[b]);

    size[label[b]]+=size[la];
    edges[label[b]]+=edges[la];
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<N;i++){
        label[i]=i;
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        merge(a,b);
    }
}