#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++){
            if(mpp.find(nums2[i])!=mpp.end() and mpp[nums2[i]]-- >0){
                
               ans.push_back(nums2[i]);
                
            }
        }
        return ans;
    



//     Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]