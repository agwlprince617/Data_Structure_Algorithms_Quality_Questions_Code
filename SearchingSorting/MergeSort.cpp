#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int i=l,k=l;
         int j=m+1;
         int temp[r+1];
         while(i<=m and j<=r){
             if(arr[i]<arr[j]){
                 temp[k++]=arr[i++];
             }
             else{
                 temp[k++]=arr[j++];
             }
         }
         while(i<=m) temp[k++]=arr[i++];
         while(j<=r) temp[k++]=arr[j++];
         for(int i=l;i<=r;i++) arr[i]=temp[i];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) return;
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};

//Time Complexity for all the cases is 0(nlogn) Always perform merge sort on linked list and not on arrays due to 
//Space Complexity which is 0(n) while quick sort is a cache friendly algo with 0(1) space complexity. 