#include<bits/stdc++.h>
using namespace std;

 void dfs(vector<vector<int>>&image,int val,int i,int j,int newColor){
        if(i<0 or i>=image.size() or j<0 or j>=image[0].size() or image[i][j]==newColor or image[i][j]!=val) return;
        
        image[i][j]=newColor;
        dfs(image,val,i+1,j,newColor);
        dfs(image,val,i-1,j,newColor);
        dfs(image,val,i,j+1,newColor);
        dfs(image,val,i,j-1,newColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int val=image[sr][sc];
        dfs(image,val,sr,sc,newColor);
        return image;
}