#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
    
void dfspath(int i,int j,string s,vector<vector<int>>&m,int n,vector<vector<bool>>&vis){
        if(i==n-1 and j==n-1){
            ans.push_back(s);
            return;
        }
        
        if(i+1<n and m[i+1][j]==1 and !vis[i+1][j]){
            vis[i+1][j]=1;
            dfspath(i+1,j,s+"D",m,n,vis);
            vis[i+1][j]=0;
        }
        if(i-1>=0 and m[i-1][j]==1 and !vis[i-1][j]){
            vis[i-1][j]=1;
            dfspath(i-1,j,s+"U",m,n,vis);
            vis[i-1][j]=0;
        }
        if(j+1<n and m[i][j+1]==1 and !vis[i][j+1]){
            vis[i][j+1]=1;
            dfspath(i,j+1,s+"R",m,n,vis);
            vis[i][j+1]=0;
        }
        if(j-1>=0 and m[i][j-1]==1 and !vis[i][j-1]){
            vis[i][j-1]=1;
            dfspath(i,j-1,s+"L",m,n,vis);
            vis[i][j-1]=0;
        }
}
    
vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        if(m[0][0]==0 or m[n-1][n-1]==0) return {};
        vector<vector<bool>>vis(n,vector<bool>(n,false));
        ans={};
        vis[0][0]=true;
        dfspath(0,0,"",m,n,vis);
        return ans;
}