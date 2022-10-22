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
    int res=0;
        for(int i=1;i<height.size()-1;i++){
            int left_max=height[i];
            for(int j=0;j<i;j++){
                if(height[j]>left_max) left_max=height[j];
            }    
            int right_max=height[i];
            for(int j=i+1;j<height.size();j++){
                if(height[j]>right_max) right_max=height[j];
            }
            res+=min(left_max,right_max)-height[i];
        }
        return res;  
    }

    return res; 
}



// Since water trapped at any element = min(max_left, max_right) - arr[i]. Calculate water trapped on smaller elements out of A[lo] and A[hi] first and move the pointers till lo doesn't cross hi.



//Efficient Sol
//Time Complexity is O(n) and Space Complexity O(1)

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