#include<bits/stdc++.h>
using namespace std;

// n = 6, X = 13
// arr[] = [1 4 45 6 10 8]
// Output:
// 1
// Explanation:
// The triplet {1, 4, 8} in 
// the array sums up to 13.


//Brute Force
//Time Complexity is O(n*3) and Space Complexity O(1)
bool isTripletSum(int a[],int n,int x){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+a[j]+a[k]==x) return 1;
            }
        }
    }
    return 0;
}



//Efficient Sol
//Time Complexity is O(n*2) and Space Complexity O(1)
//Must be sorted
bool isTripletSum(int a[],int n,int x){
   for(int i=0;i<n-2;i++){
       int start=i+1,end=n-1;
       while(start<end){
           if(a[i]+a[start]+a[end]==x) return 1;
           else if(a[i]+a[start]+a[end]<x) start++;
           else end--;
       }
   }
   return 0;
}