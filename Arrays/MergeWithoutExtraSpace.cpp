#include<bits/stdc++.h>
using namespace std;


void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1,j=0;
	    while(i>=0 and j<m){
	        if(arr1[i]>arr2[j]){
	            swap(arr1[i],arr2[j]);
	            i--;j++;
	        }
	        else{
	        break;}
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
}


//Leetcode O(n+m) Time Complexity
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=n+m-1;
        int i=m-1,j=n-1;
        while(i>=0 and j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k--]=nums2[j--];
            }
            else{
                nums1[k--]=nums1[i--];
            }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }
    }
};