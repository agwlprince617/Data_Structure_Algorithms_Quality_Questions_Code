#include<bits/stdc++.h>
using namespace std;

// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}
// Output:
// 5
// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.


//Time Complexity is O(nlogn)+O(n) Space Complexity is O(1)
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int res=arr[n-1]-arr[0];
        int maxEle,minEle;
        
        for(int i=0;i<n;i++){
            if(arr[i]>=k and arr[n-1]>=k){
                minEle=min(arr[0]+k,arr[i]-k);
                maxEle=max(arr[n-1]-k,arr[i-1]+k);
                res=min(res,maxEle-minEle);
            }
        }
        return res;
    }
};
