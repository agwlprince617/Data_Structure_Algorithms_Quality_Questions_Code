#include<bits/stdc++.h>
using namespace std;


int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    int x1=KnightPos[0];
	    int x2=TargetPos[0];
	    int y1=KnightPos[1];
	    int y2=TargetPos[1];
	    int a[1001][1001];
	    if(x1==x2 and y1==y2) return 0;
	    
	    for(int i=0;i<N;i++){
	        for(int j=0;j<N;j++){
	            a[i][j]=0;
	        }
	    }
	    
	    queue<pair<int,int>>q;
	    q.push(make_pair(x1-1,y1-1));
	    //BFS solution
	    while(!q.empty()){
	        auto it=q.front();
	        int i=it.first;
	        int j=it.second;
	        q.pop();
	        
	        if(i+1>=0 and i+1<N and j+2>=0 and j+2<N and a[i+1][j+2]==0){
	           a[i+1][j+2]=a[i][j]+1;
	           q.push(make_pair(i+1,j+2));
	       }
	       if(i-1>=0 and i-1<N and j-2>=0 and j-2<N and a[i-1][j-2]==0){
	           a[i-1][j-2]=a[i][j]+1;
	           q.push(make_pair(i-1,j-2));
	       }
	       if(i+2>=0 and i+2<N and j+1>=0 and j+1<N and a[i+2][j+1]==0){
	           a[i+2][j+1]=a[i][j]+1;
	           q.push(make_pair(i+2,j+1));
	       }
	        if(i-2>=0 and i-2<N and j-1>=0 and j-1<N and a[i-2][j-1]==0){
	           a[i-2][j-1]=a[i][j]+1;
	           q.push(make_pair(i-2,j-1));
	       }
	        if(i+1>=0 and i+1<N and j-2>=0 and j-2<N and a[i+1][j-2]==0){
	           a[i+1][j-2]=a[i][j]+1;
	           q.push(make_pair(i+1,j-2));
	       }
	         if(i-1>=0 and i-1<N and j+2>=0 and j+2<N and a[i-1][j+2]==0){
	           a[i-1][j+2]=a[i][j]+1;
	           q.push(make_pair(i-1,j+2));
	       }
	        if(i-2>=0 and i-2<N and j+1>=0 and j+1<N and a[i-2][j+1]==0){
	           a[i-2][j+1]=a[i][j]+1;
	           q.push(make_pair(i-2,j+1));
	       }
	         if(i+2>=0 and i+2<N and j-1>=0 and j-1<N and a[i+2][j-1]==0){
	           a[i+2][j-1]=a[i][j]+1;
	           q.push(make_pair(i+2,j-1));
	       }
	   }
	   return a[x2-1][y2-1];
	    
	    
}

//Time Complexity is O(N*M) Space Complexity is O(N*M)