#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int cnt=0,sum=0;
      unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k) cnt++;
            if(m.find(sum-k)!=m.end()){
                cnt+=m[sum-k];
            }
            m[sum]++;
        }
        return cnt;
    }
};