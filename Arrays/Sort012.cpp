#include<bits/stdc++.h>
using namespace std;
//Time Complexity is O(2n) Space Complexity is O(1);  
 void sort012(int a[], int n)
    {
        // coode here 
        int czero=0,cone=0,ctwo=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) czero++;
            else if(a[i]==1) cone++;
            else ctwo++;
        }
        
        for(int i=0;i<czero;i++) a[i]=0;
        for(int i=czero;i<czero+cone;i++) a[i]=1;
        for(int i=czero+cone;i<n;i++) a[i]=2;
    }



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
           if(nums[mid]==0) swap(nums[low++],nums[mid++]);
           else if(nums[mid]==1) mid++;
           else swap(nums[mid],nums[high--]);
        }
    }
};



// Time Complexity: O(N) Space Complexity: O(1)


