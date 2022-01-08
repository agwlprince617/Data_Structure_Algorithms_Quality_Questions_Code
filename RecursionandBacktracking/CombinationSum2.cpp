#include<bits/stdc++.h>
using namespace std;
    void combinationSum(int index,int target,vector<int> &arr,vector<int> &ds, vector<vector<int>> &ans){
          if(target==0){
              ans.push_back(ds);
              return;
          }
    
      for(int i=index;i<arr.size();i++){
          if(i>index and arr[i]==arr[i-1]) continue;
          if(arr[i]>target) break;  //Coz those wont sum up to make target always  greater than target
          ds.push_back(arr[i]);
          combinationSum(i+1,target-arr[i],arr,ds,ans);
          ds.pop_back();
      }
      
  }
    
    vector<vector<int>> combinationSum2(vector<int>& A, int target) {
        sort(A.begin(),A.end());
        vector<vector<int>> ans;
        vector<int> ds;
        combinationSum(0,target,A,ds,ans);
        return ans;
    }