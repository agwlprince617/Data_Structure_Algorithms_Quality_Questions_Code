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
        int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
    }
};



// Time Complexity: O(N) Space Complexity: O(1)
