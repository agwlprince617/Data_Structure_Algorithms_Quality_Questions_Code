#include <bits/stdc++.h>
using namespace std;
   
//Brute Force Time Complexity is O(n*2) Space Complexity is O(1)
long long maxSubarraySum(int arr[], int n){
        
        // Your code here
       int max_sum=arr[0];
       for(int i=0;i<n;i++){
           int sum=0;
           for(int j=i;j<n;j++){
               sum=sum+arr[j];
               max_sum=max(max_sum,sum);
           }
       }
       return max_sum;
    }

//Kadenes Algo
//Time Complexity is O(n) and Space Complexity is O(1)
long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int curr_max=arr[0];
        int max_so_far=arr[0];
        for(int i=1;i<n;i++){
            curr_max=max(arr[i],curr_max+arr[i]);
            max_so_far=max(max_so_far,curr_max);
        }
        return max_so_far;
        
    }
// Driver code
int main()
{
	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	long long ans=maxSubarraySum(arr, n);
    cout<<ans<<endl;
	return 0;
}  


