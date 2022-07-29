#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target) return i;
        // }
        // return -1;
        
        //O(logn) Time Complexity
         int n=nums.size();
         int l=0,h=n-1;
         while(l<h){
             int mid=l+(h-l)/2;
             //Target and mid are present on the same side
             if((nums[mid]-nums[n-1])*(target-nums[n-1])>0){
                 if(nums[mid]>target) h=mid;
                 else l=mid+1;
             }
             //Target is in the left side
             else if(target>nums[n-1]) h=mid;
             //Target is on the right side
             else l=mid+1;
         }
        //l==h means we have reached the target
        if(nums[l]==target) return l;
        else return -1;
    }
};