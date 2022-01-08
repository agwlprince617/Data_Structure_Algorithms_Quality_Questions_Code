#include<bits/stdc++.h>
using namespace std;
 
 void countSubsets(int ind,vector<int>&arr,vector<int>&ds,vector<vector<int>> &ans){
        int n=arr.size();
        // if(ind==n) return;
        ans.push_back(ds);
        
        
        for(int i=ind;i<n;i++){
            if(i!=ind and arr[i]==arr[i-1]) continue;
            ds.push_back(arr[i]);
            countSubsets(i+1,arr,ds,ans);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        countSubsets(0,nums,ds,ans);
        return ans;
    }