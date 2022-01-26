#include<bits/stdc++.h>
using namespace std;

//Brute Force
//Time Complexity is O(n*2) and Space Complexity O(1)
void countPairs(int arr[],int k,int n){
    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cnt++;
            }
        }
    }
 
}

//Time Complexity is O(n) and Space Complexity O(n)
//Efficient Approach
void countPairs(int arr[],int k,int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        if(m.find(k-arr[i])!=m.end())){
            cnt+=m[k-arr[i]];
        }
        m[arr[i]]++;    
    }
}