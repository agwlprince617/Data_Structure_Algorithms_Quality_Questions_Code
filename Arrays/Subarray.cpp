#include<bits/stdc++.h>
using namespace std;

void generateSubarray(int arr[],int n){
    
    
    for(int i=0;i<n;i++){
        vector<int> ans;
        for(int j=i;j<n;j++){
           ans.push_back(arr[j]);
        }
        
    }
    
    
}

int main(){
    int arr[]={1,2,3};
    generateSubarray(arr,3);
    
    return 0;
}