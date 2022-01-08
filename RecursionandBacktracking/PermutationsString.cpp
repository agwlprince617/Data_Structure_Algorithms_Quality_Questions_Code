#include<bits/stdc++.h>
using namespace std;
 
    void permute(int ind,vector<int> &nums,vector<vector<int>> &ans){
        if(ind==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            swap(nums[i],nums[ind]);
            permute(ind+1,nums,ans);
            swap(nums[i],nums[ind]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        permute(0,nums,ans);
        return ans;
    }