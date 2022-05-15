#include<bits/stdc++.h>
using namespace std;

// Input:
// N = 3, L = 3, R = 8
// A[] = {1, 4, 6}
// Output: 
// 3
// Explanation: 
// The subarrays are [1,4], [4] and [6]


//Brute Force

int countSubarray(int arr[],
                  int n, int k)
{
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
 
            // If sum is less than k
            // then update sum and
            // increment count
            if (sum + arr[j] < k) {
                sum = arr[j] + sum;
                count++;
            }
            else {
                break;
            }
        }
    }
 
    return count;
}

// We can solve this using sliding window and a key insight.
// Getting the number of subarrays with sum in the range [L, R] using sliding window is difficult, 
// but we can transform the problem into another easier one - Find number of subarrays with sum ≤ k.
// How can we use that here?

// Well, number of subarrays with 
// sum in range [L, R] =  (number of subbarrays with the sum ≤ R) - (number of subarrays with sum ≤ L-1).
//Optimal
class Solution { 
  long long countSubarray(int N,vector<int> A,long long L,long long R) {
        // code here
         return count(A,R)-count(A,L-1);
    }
    
    long long count(vector<int> arr,long long target){
        long long i=0,j=0,ans=0,sum=0;
        while(j<arr.size()){
            sum+=arr[j];
            while(sum>target) sum-=arr[i++];
             ans+=j-i+1;
             j++;
        }
        return ans;
    }
};