#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    //Algorithm
    for(int i=0;i<n-1;i++){
        bool ok=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                ok=true;
            }
        }
        if(!ok) break;
    }
    for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
}

//Ok is for checking descending order sorted array agar ek loop mein koi swaps nahi hua then come out of the loop
//Time Complexity is O(n*2) in worst case when the array is reverse sorted and O(n) when the array is sorted
// and Space Complexity O(1) coz inplace sorting
//Inner Loops runs for n-i-1 coz in one loop the maximum element takes its place so after every ith loop we can decrement in jth loop
//Uses of Bubble Sort
// In computer graphics it is popular for its capability to detect a very small error 
// (like swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n)
