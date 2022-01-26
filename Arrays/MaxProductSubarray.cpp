#include <bits/stdc++.h>
using namespace std;
   
// Input:
// N = 5
// Arr[] = {6, -3, -10, 0, 2}
// Output: 180
// Explanation: Subarray with maximum product
// is [6, -3, -10] which gives product as 180.   

//Time Complexity is O(n) and Space Complexity is O(1)

long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long pref=1,suff=1,res=INT_MIN;
	    for(int i=0;i<n;i++){
	        pref*=arr[i];
	        suff*=arr[n-i-1];
	        res=max(res,max(pref,suff));
	        if(pref==0) pref=1;
	        if(suff==0) suff=1;
	    }
	    return res;
}