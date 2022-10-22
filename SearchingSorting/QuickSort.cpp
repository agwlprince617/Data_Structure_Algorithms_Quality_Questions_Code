//A simple pergrom to perform quick sort
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
   void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low>=high) return;
        int p = partition(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high);
    }
    public:
    //Hoares Partition Algorithm
    int partition (int arr[], int low, int high)
    {
       // Your code here
       
       int i=low-1,j=high+1;int p = arr[low];
       while(true){
           do{
               i++;
           }while(arr[i]<p);
           
           do{
               j--;
           }while(arr[j]>p);
           if(i>=j) return j;
          swap(arr[i],arr[j]);
       }
       return j;
    }
};
 //In each subarray we find the pivot element
 //Time Complexity in Avg case and best case is 0(nlogn) in worst case is 0(n*2) when array is already sorted
 //Space Complexity is 0(1) We prefer using this in arrays not in linked list because in linked list addresses are
 //randomly allocated and quick sort has to traverse from the start Here we use merge sort.