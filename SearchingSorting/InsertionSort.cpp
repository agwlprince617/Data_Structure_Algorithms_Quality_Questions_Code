#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=1;i<n;i++){
         int temp=arr[i];
         int j=i-1;
         while(j>=0 && arr[j]>temp){
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=temp;
    }
    for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
}

// Values from the unsorted part are picked and placed at the correct position in the sorted part.

//Time Complexity is O(n*2) in worst case when the array is reverse sorted and O(n) when the array is sorted
// and Space Complexity O(1) coz inplace sorting

// Uses: Insertion sort is used when number of elements is small.
//  It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.

