#include<bits/stdc++.h>
using namespace std;
  
  int knapSack(int W, int wt[], int P[], int n) 
    { 
       // Your code here
      vector<vector<int>> V(n+1,vector<int> (W+1));
      
      for(int i=0;i<=n;i++){
          for(int w=0;w<=W;w++){
              if(i==0 or w==0) V[i][w]=0;
              else if(wt[i-1]<=w){
                  V[i][w]=max(V[i-1][w],V[i-1][w-wt[i-1]]+P[i-1]);
              }
              else V[i][w]=V[i-1][w];
          }
      }
      return V[n][W];
    }