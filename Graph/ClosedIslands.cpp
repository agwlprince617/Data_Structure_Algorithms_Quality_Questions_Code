#include<bits/stdc++.h>
using namespace std;
   
    void mark_visited_island(int x,int y,int r,int c,vector<vector<char>>& matrix){
        if(x<0 or x>=r or y<0 or y>=c or matrix[x][y]!='1') return;
        matrix[x][y]='2';
        mark_visited_island(x,y+1,r,c,matrix);
        mark_visited_island(x+1,y,r,c,matrix);
        mark_visited_island(x,y-1,r,c,matrix);
        mark_visited_island(x-1,y,r,c,matrix);
        mark_visited_island(x+1,y+1,r,c,matrix);
        mark_visited_island(x-1,y-1,r,c,matrix);
        mark_visited_island(x+1,y-1,r,c,matrix);
        mark_visited_island(x-1,y+1,r,c,matrix);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int rows=grid.size();
        if(rows==0) return 0;
        int cols=grid[0].size();
        int no_of_islands=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    mark_visited_island(i,j,rows,cols,grid);
                    no_of_islands+=1;
                }
            }
        }
        return no_of_islands;
    }