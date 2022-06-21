#include<bits/stdc++.h>
using namespace std;
#include<time.h>
int main(){
    int n;
    cout<<"Enter the number of elements \n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                swap(arr[min],arr[i]);
            }
        }
    }
   for(int i=0;i<n;i++)  cout<<arr[i]<<" ";
    
}

//Time Complexity is O(n*2) in all cases and is used when memory write is costly as it does not make more than n swaps