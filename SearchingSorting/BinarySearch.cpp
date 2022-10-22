#include<bits/stdc++.h>
using namespace std;
int n,i,ele,flag=0;
void Binary_Search(){
    cout<<"Enter the elements in the array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n-1,mid;
    cout<<"Enter the element to be searched\n";
    cin>>ele;
    while(l<=r){
        mid=(l+r)/2;
        if(ele==a[mid]){
            cout<<"Element found in the array at index "<<mid<<"\n";
            flag=1;
            break;
        }
        else if(ele<a[mid]){
            r=mid-1;
        }
        else if(ele>a[mid]){
            l=mid+1;
        }

    }
    if(flag==0){
        cout<<"Element not found in the array\n";
    }
}
int main(){
   Binary_Search();
}

//First and last Occurence
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n=nums.size();

        //First Occurence
        int l=0,r=n-1;
        int lind=-1,rind=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
               lind=mid;
               r=mid-1;
            }
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }

        //Second OCcurence
        l=0; r=n-1;
         while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                rind=mid;
                l=mid+1;
            }
            else if(nums[mid]<target) l=mid+1;
            else r=mid-1;
        }
        return {lind,rind};
    }
};