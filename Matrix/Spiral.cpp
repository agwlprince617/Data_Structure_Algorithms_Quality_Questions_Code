#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
      vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){
          vector<int> ans;
          int top=0,bottom=r-1,left=0,right=c-1;
          int size=r*c;
          while(ans.size()<size){
                for(int i=left;i<=right && ans.size()<size;i++) 
                    ans.push_back(matrix[top][i]);
                top++; 
                for(int i=top;i<=bottom && ans.size()<size;i++) 
                    ans.push_back(matrix[i][right]);
                right--; 
                for(int i=right;i<=left  && ans.size()<size;i--) 
                    ans.push_back(matrix[bottom][i]);
                bottom--; 
                for(int i=bottom;i<=top && ans.size()<size;i--) 
                    ans.push_back(matrix[i][left]);
                left++; 

          }
          return ans;
     }
};

int main(){
      
}