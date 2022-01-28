#include<bits/stdc++.h>
using namespace std;

// Input:
// N = 4
// arr[] = {7,4,0,9}
// Output:
// 10
// Explanation:
// Water trapped by above 
// block of height 4 is 3 units and above 
// block of height 0 is 7 units. So, the 
// total unit of water trapped is 10 units.


//Brute Force
//Time Complexity is O(n*2) and Space Complexity O(1)

long long trappingWater(int arr[], int n){
        // code here
        int res = 0;
    
    // For every element of the array
    for (int i = 1; i < n-1; i++) {
        
        // Find the maximum element on its left
        int left = arr[i];
        for (int j=0; j<i; j++)
           left = max(left, arr[j]);
        
        // Find the maximum element on its right   
        int right = arr[i];
        for (int j=i+1; j<n; j++)
           right = max(right, arr[j]); 
       
       // Update the maximum water    
       res = res + (min(left, right) - arr[i]);   
    }

    return res; 
}



// Since water trapped at any element = min(max_left, max_right) - arr[i]. Calculate water trapped on smaller elements out of A[lo] and A[hi] first and move the pointers till lo doesn't cross hi.



//Efficient Sol
//Time Complexity is O(n*2) and Space Complexity O(1)

long long trappingWater(int arr[], int n){
        // code here
        long long int left_max=0,right_max=0,result=0;
        long long int low=0,high=n-1;
        
        while(low<=high){
            if(arr[low]<arr[high]){
                if(arr[low]>left_max){
                    left_max=arr[low];
                }
                else{
                    result+=left_max-arr[low];
                    low++;
                }
            }
            else{
                 if(arr[high]>right_max){
                    right_max=arr[high];
                }
                else{
                    result+=right_max-arr[high];
                    high--;
                }
            }
        }
        return result;
}