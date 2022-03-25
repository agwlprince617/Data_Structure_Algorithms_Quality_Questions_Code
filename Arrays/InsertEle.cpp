#include <bits/stdc++.h>
using namespace std;
    
 
  int searchInsert(vector<int>& nums, int target) {
        // int idx=0;
        // for(int i=0;i<nums.size();i++){
        //     if(target==nums[i]) return idx;
        //     if(target>nums[i]) idx++;
        // }
        // return idx;
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return low;
    }