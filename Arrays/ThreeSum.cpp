#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
            if(nums[i]>0) break;
            int l=i+1,r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum<0) l++;
                else if(sum>0) r--;
                else{
                    ans.push_back(vector<int>{nums[i],nums[l],nums[r]});
                    while(nums[l]==nums[l+1] and l+1<r) l++;
                    while(nums[r]==nums[r-1] and l<r-1) r--;
                    l++; r--;
                }
            }
            while(i+1<n and nums[i+1]==nums[i]) i++; 
        }
        return ans;
    }       
};            
   