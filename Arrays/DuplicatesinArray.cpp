#include<bits/stdc++.h>
using namespace std;



//Brute Force
//Time Complexity is O(nlogn) and Space Complexity O(1)

void isDuplicate(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i];
            break;
        }
    }
}

//Maintain a frequency array
//Time Complexity is O(n) and Space Complexity O(n)
void isDuplicate(int arr[],int n){
    
}


//Maintain slow and fast pointers
//Time Complexity is O(n) and Space Complexity O(1)
int isDuplicate(vector<int> &nums,int n){
   int fast=nums[0];
   int slow=nums[0];

    //Get the point where they meet 
   do{
       slow=nums[slow];
       fast=nums[nums[fast]];
   }while(slow!=fast);

    //Bring fast to the starting point and move them by one step fast and slow 
   while(slow!=fast){
       slow=nums[slow];
       fast=nums[fast];
   }

   return slow;
}