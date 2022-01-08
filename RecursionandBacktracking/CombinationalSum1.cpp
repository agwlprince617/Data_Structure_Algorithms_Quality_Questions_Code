#include<bits/stdc++.h>
using namespace std;

  void findCombinationSum(int ind,vector<int> &arr,int target,vector<int> &ds,vector<vector<int>> &ans){
      //Base Case for Recursion
      if(ind==arr.size()){
          if(target==0){
              ans.push_back(ds);
          }
          return;
      }
      //Pick a Element
      if(arr[ind]<=target){
          ds.push_back(arr[ind]);
          findCombinationSum(ind,arr,target-arr[ind],ds,ans);
          ds.pop_back();
      }
      findCombinationSum(ind+1,arr,target,ds,ans);
  }
  
  
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>> ans;
        vector<int> A_noDups;
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++){
            if(i>0 and A[i]==A[i-1]){ continue; }
            A_noDups.push_back(A[i]);
        }
        vector<int> ds;
        findCombinationSum(0,A_noDups,B,ds,ans);
        return ans;
    }