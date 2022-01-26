#include <bits/stdc++.h>
using namespace std;
   
// Input:
// 5
// 4 2 -3 1 6

// Output: 
// Yes

// Explanation: 
// 2, -3, 1 is the subarray 
// with sum 0.

//Time Complexity is O(n) and Space Complexity is O(n)
bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> s;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0 or s.find(sum)!=s.end()) return true;
            s.insert(sum);
        }
        return false;
    }   