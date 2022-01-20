#include<bits/stdc++.h>
using namespace std;


 int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int minEle,maxEle,res;
        res=arr[n-1]-arr[0];
        int result;
        for(int i=1;i<n;i++){
            if(arr[i]>=k and arr[n-1]>=k){
                minEle=min(arr[0]+k,arr[i]-k);
                maxEle=max(arr[i-1]+k,arr[n-1]-k);
                res=min(res,maxEle-minEle);
            }
        }
        return res;
    }