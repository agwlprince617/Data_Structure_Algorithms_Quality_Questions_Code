#include <bits/stdc++.h>
using namespace std;
   
   
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


